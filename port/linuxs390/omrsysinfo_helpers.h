/*******************************************************************************
 * Copyright IBM Corp. and others 2013
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] https://openjdk.org/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0-only WITH Classpath-exception-2.0 OR GPL-2.0-only WITH OpenJDK-assembly-exception-1.0
 *******************************************************************************/

/**
 * @file
 * @ingroup Port
 * @brief sysinfo helpers
 */
#ifndef SYSINFO_HELPERS_H_
#define SYSINFO_HELPERS_H_

#include "omrport.h"

/**
 * Retrieve z/Architecture facility bits.
 *
 * @param [in]  lastDoubleWord   Size of the bits array in number of uint64_t, minus 1.
 * @param [out] bits             Caller-supplied uint64_t array that gets populated with the facility bits.
 *
 * @return The index of the last valid uint64_t in the bits array.
 */
extern int
getstfle(int lastDoubleWord, uint64_t *bits);

extern double
omrsysinfo_calculate_cpu_load(J9SysinfoCPUTime *new, J9SysinfoCPUTime *old);

#endif /* SYSINFO_HELPERS_H_ */
