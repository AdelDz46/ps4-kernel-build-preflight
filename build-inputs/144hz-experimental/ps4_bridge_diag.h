/* SPDX-License-Identifier: MIT */
#ifndef __PS4_BRIDGE_DIAG_H__
#define __PS4_BRIDGE_DIAG_H__

struct drm_connector;

#ifdef CONFIG_X86_PS4
/* Read MN864729 receiver status while holding the bridge lock only. */
void ps4_bridge_probe_lane_status(struct drm_connector *connector,
				  const char *tag);
#else
static inline void ps4_bridge_probe_lane_status(struct drm_connector *,
					const char *)
{
}
#endif

#endif
