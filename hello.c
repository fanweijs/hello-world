#include <stdio.h>
#include <curl/curl.h>
int main(void)
{
CURL *curl;
CURL code res;
curl=curl_easy_init();
if(curl){
  curl_easy_setopt(cur1,CURLOPT_URL,"http://myip.ipip.net/");
  res=curl_easy_perform(curl); 
  if(res !=CURLE_0K)
    fprintf(stderr, "curl_easy_perform() failed:%s\n",
      curl_easy_strerror(res));
    curl_easy_cleanup(curl);
}
reture 0;
}
