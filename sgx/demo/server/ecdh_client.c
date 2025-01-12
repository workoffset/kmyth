/**
 * @file ecdh_client.c
 * @brief A test client application for the ECDHE protocol.
 */

#include "ecdh_demo.h"

int main(int argc, char **argv)
{
  ECDHServer this;

  init(&this);
  this.client_mode = true;

  set_applog_severity_threshold(LOG_DEBUG);

  get_options(&this, argc, argv);
  check_options(&this);

  client_main(&this);

  cleanup(&this);

  return EXIT_SUCCESS;
}
