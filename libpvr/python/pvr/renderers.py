# ------------------------------------------------------------------------------
# renderers.py
# ------------------------------------------------------------------------------

from pvr import *

# ------------------------------------------------------------------------------

__stdRaymarcherParams = {
    "use_volume_step_length" : 1,
    "volume_step_length_multiplier" : 1.0, 
    "do_early_termination" : 1,
    "early_termination_threshold" : 0.01
    }

# ------------------------------------------------------------------------------

def standard():
    renderer = Renderer()
    sampler = createRaymarchSampler("ScatteringSampler")
    raymarcher = createRaymarcher("Naive")
    raymarcher.setRaymarchSampler(sampler)
    raymarcher.setParams(__stdRaymarcherParams)
    renderer.setRaymarcher(raymarcher)
    return renderer

# ------------------------------------------------------------------------------