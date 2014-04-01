//
// config.hpp
//
// Author: 	Lutz Bichler
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright 2013, 2024 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#include <vsomeip_internal/protocol.hpp>

#ifndef VSOMEIP_INTERNAL_CONFIG_HPP
#define VSOMEIP_INTERNAL_CONFIG_HPP

#define VSOMEIP_DEFAULT_CONFIGURATION_FILE_PATH	 \
			"/etc/vsomeip.conf"

#define VSOMEIP_MAX_TCP_MESSAGE_SIZE	4095
#define VSOMEIP_MAX_UDP_MESSAGE_SIZE	1446
#define VSOMEIP_MIN_ENDPOINT_SIZE		   6
#define VSOMEIP_MAX_ENDPOINT_SIZE		 131

#define VSOMEIP_QUEUE_SIZE				(VSOMEIP_MAX_TCP_MESSAGE_SIZE \
										 + VSOMEIP_MAX_ENDPOINT_SIZE \
										 + VSOMEIP_PROTOCOL_OVERHEAD \
										 + VSOMEIP_PROTOCOL_RESERVED)

#define VSOMEIP_CONNECT_TIMEOUT			1000
#define VSOMEIP_FLUSH_TIMEOUT			1000

#define VSOMEIP_WATCHDOG_CYCLE			1000
#define VSOMEIP_WATCHDOG_TIMEOUT		 200
#define VSOMEIP_MAX_MISSING_PONGS		   3

#define VSOMEIP_ANY_INSTANCE			0xFFFF

#endif // VSOMEIP_INTERNAL_CONFIG_HPP
