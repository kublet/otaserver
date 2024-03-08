#pragma once

#include <WebServer.h>
#include <ESPmDNS.h>
#include <Update.h>

class OTAServer {
  private:

  public:
    void init();
    void start();
    void run();
    void handle();
    void stop();
};