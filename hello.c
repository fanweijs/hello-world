#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res;
  
  curl = crul_easy_init();
  if(curl){
    curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
    res = curl_easy_perform(curl);
    if(res!= CURLE_OK)
      fprintf(stderr,"crul_easy_perform() failed:%s\n",
              curl_easy_stderror(res));
       crul_easy_cleanup(curl);
  }
  retrun 0;
}
