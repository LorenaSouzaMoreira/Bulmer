#include <iostream>

using namespace std;

int a=0, b=0, c=0, d=0;

int entrada(int n){
    if(n ==a)
        return 0;
    else if(n==b)
        return 1;
    else if(n==c)
        return 2;
    else if(n==d)
        return 3;
    return -1;    
}

int main(){ 
    int m[4][4] ={0};
    
    bool asso = true ;
    //com =true, neutroe = false, neutrod = false, sim =true;

    cout<<"Digite os numeros do conjunto:"<< endl;
    cin>>a>>b>>c>>d;

    for(int i=0; i<4; i++){
        cout<<"Digite o valor da linha "<<i<<" :";
        for(int j=0; j<4; j++){
            cin>>m[i][j];
        }
    }

    int auxd=0;
    int auxe =0;
    //comutativa
    // for(int i=0; i<4; i++){
    //     auxd ==0;
    //     auxe ==0;
    //     for(int j=0; j<4; j++){
    //         if(m[i][j]!=m[j][i]){
    //             com=false;
    //         }
    //         //elemento neutro
    //         if(i!=0 && m[0][j] == m[i][j])
    //             auxe++;
    //         if(j!=0 && m[i][0] == m[i][j])
    //             auxd++;
    //     }
    //     cout<<auxd<<" "<<auxe<<endl;
    //     if(auxd==4)
    //         neutroe = true;
    //     if(auxe==4)
    //         neutrod = false;
    // } 

    //associativa
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            for(int n=0; n<4; n++){
                cout<<entrada(m[i][j])<<" * "<<n<<" == "<<i<<" * "<<entrada(m[j][n])<<endl;
                if(m[entrada(m[i][j])][n] != m[i][entrada(m[j][n])] ){
                    asso = false;
                    break;
                }
            }
        }
     }
        
    //elemento simetrico
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<4; j++){
    //         if(i!=j && m[i][j] != m[j][i]){
    //             sim = false;
    //             break;
    //         }
    //     }
    // }

    // if(!com){
    //     cout<<"nao ";
    // }
    // cout<<" comutativa, ";

     if(!asso){
        cout<<"nao e ";
    }
    cout<<"associativa"<<endl;

    // if(neutrod && neutroe){
    //     cout<<"tem elemento neutro ";
    // }else if(neutrod)
    //      cout<<"tem elemento neutro a direita, ";
    // else if(neutroe)
    //      cout<<"tem elemento neutro a esquerda, ";
    // else
    //     cout<<"nao tem elemento neutro, ";
    
    // if(!sim){
    //     cout<<"nao ";
    // }
    // cout<<" simetrica "<<endl;

    return 0;
}