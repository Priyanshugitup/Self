#include <stdio.h>

int main(){
    char arr[] = "College Wallah is best"; //double quotes not single
  // char arr[] = {'H','e','l','l','o'};
   // printf("%c",arr);
    printf("%s",arr);
//    for(int i = 0;arr[i]!='\0';i++){
//     printf("%c",arr[i]);
//    }
    return 0;
}
// #include <stdio.h>

// int main(){
//     char arr[] = {'H','e','l','l','o'}; // if u declared without size then must initialize simultaniously 
//     arr[1] = 98; //character whose ASCII value is 98 will be printed at arr[1]
//     int i = 0;
//     while(arr[i]!='\0'){
//         printf("%c",arr[i]);
//         //printf("%c",i[arr]);
//         i++;
//     }
//     return 0;
// }