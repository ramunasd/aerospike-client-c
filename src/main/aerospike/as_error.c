/*
 * Copyright 2008-2014 Aerospike, Inc.
 *
 * Portions may be licensed to Aerospike, Inc. under one or more contributor
 * license agreements.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */
#include <aerospike/as_error.h>
#include <stdarg.h>

extern inline as_error * as_error_init(as_error * err);

extern inline as_status as_error_reset(as_error * err);

extern inline as_status as_error_setall(as_error * err, as_status code, const char * message, const char * func, const char * file, uint32_t line);

extern inline as_status as_error_setallv(as_error * err, as_status code, const char * func, const char * file, uint32_t line, const char * fmt, ...);

extern inline as_status as_error_set(as_error * err, as_status code, const char * fmt, ...);
