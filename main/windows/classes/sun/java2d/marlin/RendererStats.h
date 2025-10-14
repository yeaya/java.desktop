#ifndef _sun_java2d_marlin_RendererStats_h_
#define _sun_java2d_marlin_RendererStats_h_
//$ class sun.java2d.marlin.RendererStats
//$ extends sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class ArrayCacheConst$CacheStats;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			namespace stats {
				class Histogram;
				class Monitor;
				class StatLong;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererStats : public ::sun::java2d::marlin::MarlinConst {
	$class(RendererStats, $NO_CLASS_INIT, ::sun::java2d::marlin::MarlinConst)
public:
	RendererStats();
	void init$($String* name);
	static ::sun::java2d::marlin::RendererStats* createInstance(Object$* parent, $String* name);
	void dump();
	static void dumpStats();
	$String* name = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_cache_rowAA = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_cache_rowAAChunk = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_cache_tiles = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_addLine = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_addLine_skip = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_curveBreak = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_curveBreak_dec = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_curveBreak_inc = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_quadBreak = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_quadBreak_dec = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_edges = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_edges_count = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_edges_resizes = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_activeEdges = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_activeEdges_updates = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_activeEdges_adds = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_activeEdges_adds_high = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_crossings_updates = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_crossings_sorts = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_crossings_bsearch = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_rdr_crossings_msorts = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_str_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_str_polystack_types = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_cpd_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_cpd_polystack_types = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_pcf_idxstack_indices = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_dasher_dasher = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_dasher_firstSegmentsBuffer = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_marlincache_rowAAChunk = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_marlincache_touchedTile = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_alphaline = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_crossings = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_aux_crossings = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_edgeBuckets = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_edgeBucketCounts = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_edgePtrs = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_renderer_aux_edgePtrs = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_str_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_str_polystack_types = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_cpd_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_cpd_polystack_types = nullptr;
	::sun::java2d::marlin::stats::StatLong* stat_array_pcf_idxstack_indices = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_edges_count = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_crossings = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_crossings_ratio = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_crossings_adds = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_crossings_msorts = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_rdr_crossings_msorts_adds = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_str_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_tile_generator_alpha = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_tile_generator_encoding = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_tile_generator_encoding_dist = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_tile_generator_encoding_ratio = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_tile_generator_encoding_runLen = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_cpd_polystack_curves = nullptr;
	::sun::java2d::marlin::stats::Histogram* hist_pcf_idxstack_indices = nullptr;
	$Array<::sun::java2d::marlin::stats::StatLong>* statistics = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_pre_getAATileGenerator = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_rdr_addLine = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_rdr_endRendering = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_rdr_endRendering_Y = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_rdr_copyAARow = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_pipe_renderTiles = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_ptg_getAlpha = nullptr;
	::sun::java2d::marlin::stats::Monitor* mon_debug = nullptr;
	$Array<::sun::java2d::marlin::stats::Monitor>* monitors = nullptr;
	int64_t totalOffHeapInitial = 0;
	int64_t totalOffHeap = 0;
	int64_t totalOffHeapMax = 0;
	$Array<::sun::java2d::marlin::ArrayCacheConst$CacheStats>* cacheStats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_RendererStats_h_