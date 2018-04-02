/**
 * @file tdistat.h
 * Copyright 2012, 2013 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/* Created by Casper S. Hornstrup <chorns@users.sourceforge.net> */
#ifndef __TDISTAT_H
#define __TDISTAT_H
#pragma GCC system_header
#include <_mingw.h>

/*
 * TDI status codes
 */

#ifdef __cplusplus
extern "C" {
#endif

#define TDI_SUCCESS                       STATUS_SUCCESS
#define TDI_NO_RESOURCES                  STATUS_INSUFFICIENT_RESOURCES
#define TDI_ADDR_IN_USE                   STATUS_ADDRESS_ALREADY_EXISTS
#define TDI_BAD_ADDR                      STATUS_INVALID_ADDRESS_COMPONENT
#define TDI_NO_FREE_ADDR                  STATUS_TOO_MANY_ADDRESSES
#define TDI_ADDR_INVALID                  STATUS_INVALID_ADDRESS
#define TDI_ADDR_DELETED                  STATUS_ADDRESS_CLOSED
#define TDI_BUFFER_OVERFLOW               STATUS_BUFFER_OVERFLOW
#define TDI_BAD_EVENT_TYPE                STATUS_INVALID_PARAMETER
#define TDI_BAD_OPTION                    STATUS_INVALID_PARAMETER
#define TDI_CONN_REFUSED                  STATUS_CONNECTION_REFUSED
#define TDI_INVALID_CONNECTION            STATUS_CONNECTION_INVALID
#define TDI_ALREADY_ASSOCIATED            STATUS_ADDRESS_ALREADY_ASSOCIATED
#define TDI_NOT_ASSOCIATED                STATUS_ADDRESS_NOT_ASSOCIATED
#define TDI_CONNECTION_ACTIVE             STATUS_CONNECTION_ACTIVE
#define TDI_CONNECTION_ABORTED            STATUS_CONNECTION_ABORTED
#define TDI_CONNECTION_RESET              STATUS_CONNECTION_RESET
#define TDI_TIMED_OUT                     STATUS_IO_TIMEOUT
#define TDI_GRACEFUL_DISC                 STATUS_GRACEFUL_DISCONNECT
#define TDI_NOT_ACCEPTED                  STATUS_DATA_NOT_ACCEPTED
#define TDI_MORE_PROCESSING               STATUS_MORE_PROCESSING_REQUIRED
#define TDI_INVALID_STATE                 STATUS_INVALID_DEVICE_STATE
#define TDI_INVALID_PARAMETER             STATUS_INVALID_PARAMETER
#define TDI_DEST_NET_UNREACH              STATUS_NETWORK_UNREACHABLE
#define TDI_DEST_HOST_UNREACH             STATUS_HOST_UNREACHABLE
#define TDI_DEST_UNREACHABLE              TDI_DEST_HOST_UNREACH
#define TDI_DEST_PROT_UNREACH             STATUS_PROTOCOL_UNREACHABLE
#define TDI_DEST_PORT_UNREACH             STATUS_PORT_UNREACHABLE
#define TDI_INVALID_QUERY                 STATUS_INVALID_DEVICE_REQUEST
#define TDI_REQ_ABORTED                   STATUS_REQUEST_ABORTED
#define TDI_BUFFER_TOO_SMALL              STATUS_BUFFER_TOO_SMALL
#define TDI_CANCELLED                     STATUS_CANCELLED
#define	TDI_BUFFER_TOO_BIG		            STATUS_INVALID_BUFFER_SIZE
#define TDI_INVALID_REQUEST               STATUS_INVALID_DEVICE_REQUEST
#define TDI_PENDING                       STATUS_PENDING
#define TDI_ITEM_NOT_FOUND                STATUS_OBJECT_NAME_NOT_FOUND

#define TDI_STATUS_BAD_VERSION            0xC0010004L
#define TDI_STATUS_BAD_CHARACTERISTICS    0xC0010005L

#define	TDI_OPTION_EOL                    0

#define	TDI_ADDRESS_OPTION_REUSE          1
#define	TDI_ADDRESS_OPTION_DHCP           2

#ifdef __cplusplus
}
#endif

#endif /* __TDISTAT_H */
