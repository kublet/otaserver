#pragma once

#include <WebServer.h>
#include <ESPmDNS.h>
#include <Update.h>


class Dev {
  private:

  public:

    bool isRunning = false;

    void initWebServer();
    void startWebServer();
    void handleWebClient();
    void stopWebServer();
};
inline Dev dev;