#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
CURL *curl;
CURL code res;
curl=curl_ easy_ init();
if(curl){
  curl_ easy_ setopt(cur1,CURLOPT_ URL,"http://myip.ipip.net/");
  res=curl_ easy_ perform(curl); 
  if(res !=CURLE_ 0K)
    fprintf(stderr, "curl_ easy_ perform() failed:%s\n",
      curl_ easy_ strerror(res));
    curl_ easy_ cleanup(curl);
}
return0;
}
