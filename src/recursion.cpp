
#ifndef RECUSION_CPP
#define RECUSION_CPP
template <typename _T>
double avg_recu(_T &&array,int size,int n)
{
    if (n==0)
        return array[n]/size;
    else
        return (array[n])/size +avg_recu(array,size,n-1);
}

#endif
