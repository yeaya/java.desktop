#include <sun/java2d/marlin/RendererStats.h>

#include <sun/java2d/marlin/ArrayCacheConst$CacheStats.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererStats$RendererStatsHolder.h>
#include <sun/java2d/marlin/stats/Histogram.h>
#include <sun/java2d/marlin/stats/Monitor.h>
#include <sun/java2d/marlin/stats/StatLong.h>
#include <jcpp.h>

#undef DO_STATS

using $ArrayCacheConst$CacheStatsArray = $Array<::sun::java2d::marlin::ArrayCacheConst$CacheStats>;
using $MonitorArray = $Array<::sun::java2d::marlin::stats::Monitor>;
using $StatLongArray = $Array<::sun::java2d::marlin::stats::StatLong>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayCacheConst$CacheStats = ::sun::java2d::marlin::ArrayCacheConst$CacheStats;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererStats$RendererStatsHolder = ::sun::java2d::marlin::RendererStats$RendererStatsHolder;
using $Histogram = ::sun::java2d::marlin::stats::Histogram;
using $Monitor = ::sun::java2d::marlin::stats::Monitor;
using $StatLong = ::sun::java2d::marlin::stats::StatLong;

namespace sun {
	namespace java2d {
		namespace marlin {

$FieldInfo _RendererStats_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(RendererStats, name)},
	{"stat_cache_rowAA", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_cache_rowAA)},
	{"stat_cache_rowAAChunk", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_cache_rowAAChunk)},
	{"stat_cache_tiles", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_cache_tiles)},
	{"stat_rdr_addLine", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_addLine)},
	{"stat_rdr_addLine_skip", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_addLine_skip)},
	{"stat_rdr_curveBreak", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_curveBreak)},
	{"stat_rdr_curveBreak_dec", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_curveBreak_dec)},
	{"stat_rdr_curveBreak_inc", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_curveBreak_inc)},
	{"stat_rdr_quadBreak", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_quadBreak)},
	{"stat_rdr_quadBreak_dec", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_quadBreak_dec)},
	{"stat_rdr_edges", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_edges)},
	{"stat_rdr_edges_count", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_edges_count)},
	{"stat_rdr_edges_resizes", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_edges_resizes)},
	{"stat_rdr_activeEdges", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_activeEdges)},
	{"stat_rdr_activeEdges_updates", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_activeEdges_updates)},
	{"stat_rdr_activeEdges_adds", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_activeEdges_adds)},
	{"stat_rdr_activeEdges_adds_high", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_activeEdges_adds_high)},
	{"stat_rdr_crossings_updates", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_crossings_updates)},
	{"stat_rdr_crossings_sorts", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_crossings_sorts)},
	{"stat_rdr_crossings_bsearch", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_crossings_bsearch)},
	{"stat_rdr_crossings_msorts", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_rdr_crossings_msorts)},
	{"stat_str_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_str_polystack_curves)},
	{"stat_str_polystack_types", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_str_polystack_types)},
	{"stat_cpd_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_cpd_polystack_curves)},
	{"stat_cpd_polystack_types", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_cpd_polystack_types)},
	{"stat_pcf_idxstack_indices", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_pcf_idxstack_indices)},
	{"stat_array_dasher_dasher", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_dasher_dasher)},
	{"stat_array_dasher_firstSegmentsBuffer", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_dasher_firstSegmentsBuffer)},
	{"stat_array_marlincache_rowAAChunk", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_marlincache_rowAAChunk)},
	{"stat_array_marlincache_touchedTile", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_marlincache_touchedTile)},
	{"stat_array_renderer_alphaline", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_alphaline)},
	{"stat_array_renderer_crossings", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_crossings)},
	{"stat_array_renderer_aux_crossings", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_aux_crossings)},
	{"stat_array_renderer_edgeBuckets", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_edgeBuckets)},
	{"stat_array_renderer_edgeBucketCounts", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_edgeBucketCounts)},
	{"stat_array_renderer_edgePtrs", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_edgePtrs)},
	{"stat_array_renderer_aux_edgePtrs", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_renderer_aux_edgePtrs)},
	{"stat_array_str_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_str_polystack_curves)},
	{"stat_array_str_polystack_types", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_str_polystack_types)},
	{"stat_array_cpd_polystack_curves", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_cpd_polystack_curves)},
	{"stat_array_cpd_polystack_types", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_cpd_polystack_types)},
	{"stat_array_pcf_idxstack_indices", "Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, stat_array_pcf_idxstack_indices)},
	{"hist_rdr_edges_count", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_edges_count)},
	{"hist_rdr_crossings", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_crossings)},
	{"hist_rdr_crossings_ratio", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_crossings_ratio)},
	{"hist_rdr_crossings_adds", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_crossings_adds)},
	{"hist_rdr_crossings_msorts", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_crossings_msorts)},
	{"hist_rdr_crossings_msorts_adds", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_rdr_crossings_msorts_adds)},
	{"hist_str_polystack_curves", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_str_polystack_curves)},
	{"hist_tile_generator_alpha", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_tile_generator_alpha)},
	{"hist_tile_generator_encoding", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_tile_generator_encoding)},
	{"hist_tile_generator_encoding_dist", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_tile_generator_encoding_dist)},
	{"hist_tile_generator_encoding_ratio", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_tile_generator_encoding_ratio)},
	{"hist_tile_generator_encoding_runLen", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_tile_generator_encoding_runLen)},
	{"hist_cpd_polystack_curves", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_cpd_polystack_curves)},
	{"hist_pcf_idxstack_indices", "Lsun/java2d/marlin/stats/Histogram;", nullptr, $FINAL, $field(RendererStats, hist_pcf_idxstack_indices)},
	{"statistics", "[Lsun/java2d/marlin/stats/StatLong;", nullptr, $FINAL, $field(RendererStats, statistics)},
	{"mon_pre_getAATileGenerator", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_pre_getAATileGenerator)},
	{"mon_rdr_addLine", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_rdr_addLine)},
	{"mon_rdr_endRendering", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_rdr_endRendering)},
	{"mon_rdr_endRendering_Y", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_rdr_endRendering_Y)},
	{"mon_rdr_copyAARow", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_rdr_copyAARow)},
	{"mon_pipe_renderTiles", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_pipe_renderTiles)},
	{"mon_ptg_getAlpha", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_ptg_getAlpha)},
	{"mon_debug", "Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, mon_debug)},
	{"monitors", "[Lsun/java2d/marlin/stats/Monitor;", nullptr, $FINAL, $field(RendererStats, monitors)},
	{"totalOffHeapInitial", "J", nullptr, 0, $field(RendererStats, totalOffHeapInitial)},
	{"totalOffHeap", "J", nullptr, 0, $field(RendererStats, totalOffHeap)},
	{"totalOffHeapMax", "J", nullptr, 0, $field(RendererStats, totalOffHeapMax)},
	{"cacheStats", "[Lsun/java2d/marlin/ArrayCacheConst$CacheStats;", nullptr, 0, $field(RendererStats, cacheStats)},
	{}
};

$MethodInfo _RendererStats_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(RendererStats::*)($String*)>(&RendererStats::init$))},
	{"createInstance", "(Ljava/lang/Object;Ljava/lang/String;)Lsun/java2d/marlin/RendererStats;", nullptr, $STATIC, $method(static_cast<RendererStats*(*)(Object$*,$String*)>(&RendererStats::createInstance))},
	{"dump", "()V", nullptr, 0, $method(static_cast<void(RendererStats::*)()>(&RendererStats::dump))},
	{"dumpStats", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&RendererStats::dumpStats))},
	{}
};

$InnerClassInfo _RendererStats_InnerClassesInfo_[] = {
	{"sun.java2d.marlin.RendererStats$RendererStatsHolder", "sun.java2d.marlin.RendererStats", "RendererStatsHolder", $STATIC | $FINAL},
	{}
};

$ClassInfo _RendererStats_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.marlin.RendererStats",
	"java.lang.Object",
	"sun.java2d.marlin.MarlinConst",
	_RendererStats_FieldInfo_,
	_RendererStats_MethodInfo_,
	nullptr,
	nullptr,
	_RendererStats_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.marlin.RendererStats$RendererStatsHolder,sun.java2d.marlin.RendererStats$RendererStatsHolder$1"
};

$Object* allocate$RendererStats($Class* clazz) {
	return $of($alloc(RendererStats));
}

RendererStats* RendererStats::createInstance(Object$* parent, $String* name) {
	$init(RendererStats);
	$useLocalCurrentObjectStackCache();
	$var(RendererStats, stats, $new(RendererStats, name));
	$nc($($RendererStats$RendererStatsHolder::getInstance()))->add(parent, stats);
	return stats;
}

void RendererStats::dumpStats() {
	$init(RendererStats);
	$RendererStats$RendererStatsHolder::dumpStats();
}

void RendererStats::init$($String* name) {
	$set(this, stat_cache_rowAA, $new($StatLong, "cache.rowAA"_s));
	$set(this, stat_cache_rowAAChunk, $new($StatLong, "cache.rowAAChunk"_s));
	$set(this, stat_cache_tiles, $new($StatLong, "cache.tiles"_s));
	$set(this, stat_rdr_addLine, $new($StatLong, "renderer.addLine"_s));
	$set(this, stat_rdr_addLine_skip, $new($StatLong, "renderer.addLine.skip"_s));
	$set(this, stat_rdr_curveBreak, $new($StatLong, "renderer.curveBreakIntoLinesAndAdd"_s));
	$set(this, stat_rdr_curveBreak_dec, $new($StatLong, "renderer.curveBreakIntoLinesAndAdd.dec"_s));
	$set(this, stat_rdr_curveBreak_inc, $new($StatLong, "renderer.curveBreakIntoLinesAndAdd.inc"_s));
	$set(this, stat_rdr_quadBreak, $new($StatLong, "renderer.quadBreakIntoLinesAndAdd"_s));
	$set(this, stat_rdr_quadBreak_dec, $new($StatLong, "renderer.quadBreakIntoLinesAndAdd.dec"_s));
	$set(this, stat_rdr_edges, $new($StatLong, "renderer.edges"_s));
	$set(this, stat_rdr_edges_count, $new($StatLong, "renderer.edges.count"_s));
	$set(this, stat_rdr_edges_resizes, $new($StatLong, "renderer.edges.resize"_s));
	$set(this, stat_rdr_activeEdges, $new($StatLong, "renderer.activeEdges"_s));
	$set(this, stat_rdr_activeEdges_updates, $new($StatLong, "renderer.activeEdges.updates"_s));
	$set(this, stat_rdr_activeEdges_adds, $new($StatLong, "renderer.activeEdges.adds"_s));
	$set(this, stat_rdr_activeEdges_adds_high, $new($StatLong, "renderer.activeEdges.adds_high"_s));
	$set(this, stat_rdr_crossings_updates, $new($StatLong, "renderer.crossings.updates"_s));
	$set(this, stat_rdr_crossings_sorts, $new($StatLong, "renderer.crossings.sorts"_s));
	$set(this, stat_rdr_crossings_bsearch, $new($StatLong, "renderer.crossings.bsearch"_s));
	$set(this, stat_rdr_crossings_msorts, $new($StatLong, "renderer.crossings.msorts"_s));
	$set(this, stat_str_polystack_curves, $new($StatLong, "stroker.polystack.curves"_s));
	$set(this, stat_str_polystack_types, $new($StatLong, "stroker.polystack.types"_s));
	$set(this, stat_cpd_polystack_curves, $new($StatLong, "closedPathDetector.polystack.curves"_s));
	$set(this, stat_cpd_polystack_types, $new($StatLong, "closedPathDetector.polystack.types"_s));
	$set(this, stat_pcf_idxstack_indices, $new($StatLong, "pathClipFilter.stack.indices"_s));
	$set(this, stat_array_dasher_dasher, $new($StatLong, "array.dasher.dasher.d_float"_s));
	$set(this, stat_array_dasher_firstSegmentsBuffer, $new($StatLong, "array.dasher.firstSegmentsBuffer.d_float"_s));
	$set(this, stat_array_marlincache_rowAAChunk, $new($StatLong, "array.marlincache.rowAAChunk.resize"_s));
	$set(this, stat_array_marlincache_touchedTile, $new($StatLong, "array.marlincache.touchedTile.int"_s));
	$set(this, stat_array_renderer_alphaline, $new($StatLong, "array.renderer.alphaline.int"_s));
	$set(this, stat_array_renderer_crossings, $new($StatLong, "array.renderer.crossings.int"_s));
	$set(this, stat_array_renderer_aux_crossings, $new($StatLong, "array.renderer.aux_crossings.int"_s));
	$set(this, stat_array_renderer_edgeBuckets, $new($StatLong, "array.renderer.edgeBuckets.int"_s));
	$set(this, stat_array_renderer_edgeBucketCounts, $new($StatLong, "array.renderer.edgeBucketCounts.int"_s));
	$set(this, stat_array_renderer_edgePtrs, $new($StatLong, "array.renderer.edgePtrs.int"_s));
	$set(this, stat_array_renderer_aux_edgePtrs, $new($StatLong, "array.renderer.aux_edgePtrs.int"_s));
	$set(this, stat_array_str_polystack_curves, $new($StatLong, "array.stroker.polystack.curves.d_float"_s));
	$set(this, stat_array_str_polystack_types, $new($StatLong, "array.stroker.polystack.curveTypes.d_byte"_s));
	$set(this, stat_array_cpd_polystack_curves, $new($StatLong, "array.closedPathDetector.polystack.curves.d_float"_s));
	$set(this, stat_array_cpd_polystack_types, $new($StatLong, "array.closedPathDetector.polystack.curveTypes.d_byte"_s));
	$set(this, stat_array_pcf_idxstack_indices, $new($StatLong, "array.pathClipFilter.stack.indices.d_int"_s));
	$set(this, hist_rdr_edges_count, $new($Histogram, "renderer.edges.count"_s));
	$set(this, hist_rdr_crossings, $new($Histogram, "renderer.crossings"_s));
	$set(this, hist_rdr_crossings_ratio, $new($Histogram, "renderer.crossings.ratio"_s));
	$set(this, hist_rdr_crossings_adds, $new($Histogram, "renderer.crossings.adds"_s));
	$set(this, hist_rdr_crossings_msorts, $new($Histogram, "renderer.crossings.msorts"_s));
	$set(this, hist_rdr_crossings_msorts_adds, $new($Histogram, "renderer.crossings.msorts.adds"_s));
	$set(this, hist_str_polystack_curves, $new($Histogram, "stroker.polystack.curves"_s));
	$set(this, hist_tile_generator_alpha, $new($Histogram, "tile_generator.alpha"_s));
	$set(this, hist_tile_generator_encoding, $new($Histogram, "tile_generator.encoding"_s));
	$set(this, hist_tile_generator_encoding_dist, $new($Histogram, "tile_generator.encoding.dist"_s));
	$set(this, hist_tile_generator_encoding_ratio, $new($Histogram, "tile_generator.encoding.ratio"_s));
	$set(this, hist_tile_generator_encoding_runLen, $new($Histogram, "tile_generator.encoding.runLen"_s));
	$set(this, hist_cpd_polystack_curves, $new($Histogram, "closedPathDetector.polystack.curves"_s));
	$set(this, hist_pcf_idxstack_indices, $new($Histogram, "pathClipFilter.stack.indices"_s));
	$set(this, statistics, $new($StatLongArray, {
		this->stat_cache_rowAA,
		this->stat_cache_rowAAChunk,
		this->stat_cache_tiles,
		this->stat_rdr_addLine,
		this->stat_rdr_addLine_skip,
		this->stat_rdr_curveBreak,
		this->stat_rdr_curveBreak_dec,
		this->stat_rdr_curveBreak_inc,
		this->stat_rdr_quadBreak,
		this->stat_rdr_quadBreak_dec,
		this->stat_rdr_edges,
		this->stat_rdr_edges_count,
		this->stat_rdr_edges_resizes,
		this->stat_rdr_activeEdges,
		this->stat_rdr_activeEdges_updates,
		this->stat_rdr_activeEdges_adds,
		this->stat_rdr_activeEdges_adds_high,
		this->stat_rdr_crossings_updates,
		this->stat_rdr_crossings_sorts,
		this->stat_rdr_crossings_bsearch,
		this->stat_rdr_crossings_msorts,
		this->stat_str_polystack_types,
		this->stat_str_polystack_curves,
		this->stat_cpd_polystack_curves,
		this->stat_cpd_polystack_types,
		this->stat_pcf_idxstack_indices,
		static_cast<$StatLong*>(this->hist_rdr_edges_count),
		static_cast<$StatLong*>(this->hist_rdr_crossings),
		static_cast<$StatLong*>(this->hist_rdr_crossings_ratio),
		static_cast<$StatLong*>(this->hist_rdr_crossings_adds),
		static_cast<$StatLong*>(this->hist_rdr_crossings_msorts),
		static_cast<$StatLong*>(this->hist_rdr_crossings_msorts_adds),
		static_cast<$StatLong*>(this->hist_tile_generator_alpha),
		static_cast<$StatLong*>(this->hist_tile_generator_encoding),
		static_cast<$StatLong*>(this->hist_tile_generator_encoding_dist),
		static_cast<$StatLong*>(this->hist_tile_generator_encoding_ratio),
		static_cast<$StatLong*>(this->hist_tile_generator_encoding_runLen),
		static_cast<$StatLong*>(this->hist_str_polystack_curves),
		static_cast<$StatLong*>(this->hist_cpd_polystack_curves),
		static_cast<$StatLong*>(this->hist_pcf_idxstack_indices),
		this->stat_array_dasher_dasher,
		this->stat_array_dasher_firstSegmentsBuffer,
		this->stat_array_marlincache_rowAAChunk,
		this->stat_array_marlincache_touchedTile,
		this->stat_array_renderer_alphaline,
		this->stat_array_renderer_crossings,
		this->stat_array_renderer_aux_crossings,
		this->stat_array_renderer_edgeBuckets,
		this->stat_array_renderer_edgeBucketCounts,
		this->stat_array_renderer_edgePtrs,
		this->stat_array_renderer_aux_edgePtrs,
		this->stat_array_str_polystack_curves,
		this->stat_array_str_polystack_types,
		this->stat_array_cpd_polystack_curves,
		this->stat_array_cpd_polystack_types,
		this->stat_array_pcf_idxstack_indices
	}));
	$set(this, mon_pre_getAATileGenerator, $new($Monitor, "MarlinRenderingEngine.getAATileGenerator()"_s));
	$set(this, mon_rdr_addLine, $new($Monitor, "Renderer.addLine()"_s));
	$set(this, mon_rdr_endRendering, $new($Monitor, "Renderer.endRendering()"_s));
	$set(this, mon_rdr_endRendering_Y, $new($Monitor, "Renderer._endRendering(Y)"_s));
	$set(this, mon_rdr_copyAARow, $new($Monitor, "Renderer.copyAARow()"_s));
	$set(this, mon_pipe_renderTiles, $new($Monitor, "AAShapePipe.renderTiles()"_s));
	$set(this, mon_ptg_getAlpha, $new($Monitor, "MarlinTileGenerator.getAlpha()"_s));
	$set(this, mon_debug, $new($Monitor, "DEBUG()"_s));
	$set(this, monitors, $new($MonitorArray, {
		this->mon_pre_getAATileGenerator,
		this->mon_rdr_addLine,
		this->mon_rdr_endRendering,
		this->mon_rdr_endRendering_Y,
		this->mon_rdr_copyAARow,
		this->mon_pipe_renderTiles,
		this->mon_ptg_getAlpha,
		this->mon_debug
	}));
	this->totalOffHeapInitial = 0;
	this->totalOffHeap = 0;
	this->totalOffHeapMax = 0;
	$set(this, cacheStats, nullptr);
	$set(this, name, name);
}

void RendererStats::dump() {
	$useLocalCurrentObjectStackCache();
	$MarlinUtils::logInfo($$str({"RendererContext: "_s, this->name}));
	$init($MarlinConst);
	if ($MarlinConst::DO_STATS) {
		{
			$var($StatLongArray, arr$, this->statistics);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($StatLong, stat, arr$->get(i$));
				{
					if ($nc(stat)->count != 0) {
						$MarlinUtils::logInfo($(stat->toString()));
						{
							stat->reset();
						}
					}
				}
			}
		}
		$MarlinUtils::logInfo($$str({"OffHeap footprint: initial: "_s, $$str(this->totalOffHeapInitial), " bytes - max: "_s, $$str(this->totalOffHeapMax), " bytes"_s}));
		{
			this->totalOffHeapMax = 0;
		}
		$MarlinUtils::logInfo($$str({"Array caches for RendererContext: "_s, this->name}));
		int64_t totalInitialBytes = this->totalOffHeapInitial;
		int64_t totalCacheBytes = 0;
		if (this->cacheStats != nullptr) {
			{
				$var($ArrayCacheConst$CacheStatsArray, arr$, this->cacheStats);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($ArrayCacheConst$CacheStats, stat, arr$->get(i$));
					{
						totalCacheBytes += $nc(stat)->dumpStats();
						totalInitialBytes += stat->getTotalInitialBytes();
						{
							stat->reset();
						}
					}
				}
			}
		}
		$MarlinUtils::logInfo($$str({"Heap footprint: initial: "_s, $$str(totalInitialBytes), " bytes - cache: "_s, $$str(totalCacheBytes), " bytes"_s}));
	}
}

RendererStats::RendererStats() {
}

$Class* RendererStats::load$($String* name, bool initialize) {
	$loadClass(RendererStats, name, initialize, &_RendererStats_ClassInfo_, allocate$RendererStats);
	return class$;
}

$Class* RendererStats::class$ = nullptr;

		} // marlin
	} // java2d
} // sun