/* ----------------------------------------------------------------------------
 * ergoDOX controller: MCP23018 specific exports
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef MCP23018_h
	#define MCP23018_h

	#include "lib/data-types.h"

	#ifdef MCP23018_h_INCLUDE_PRIVATE

		#define MCP23018_TWI_ADDRESS 0b0100000

		extern bool mcp23018_ready;

		uint8_t mcp23018_init(void);

	#endif

#endif
