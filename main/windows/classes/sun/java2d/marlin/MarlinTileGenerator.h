#ifndef _sun_java2d_marlin_MarlinTileGenerator_h_
#define _sun_java2d_marlin_MarlinTileGenerator_h_
//$ class sun.java2d.marlin.MarlinTileGenerator
//$ extends sun.java2d.pipe.AATileGenerator
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/pipe/AATileGenerator.h>

#pragma push_macro("DISABLE_BLEND")
#undef DISABLE_BLEND
#pragma push_macro("FILL_TILE_W")
#undef FILL_TILE_W
#pragma push_macro("MAX_TILE_ALPHA_SUM")
#undef MAX_TILE_ALPHA_SUM
#pragma push_macro("TH_AA_ALPHA_FILL_EMPTY")
#undef TH_AA_ALPHA_FILL_EMPTY
#pragma push_macro("TH_AA_ALPHA_FILL_FULL")
#undef TH_AA_ALPHA_FILL_FULL

namespace sun {
	namespace java2d {
		namespace marlin {
			class MarlinCache;
			class Renderer;
			class RendererStats;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class MarlinTileGenerator : public ::sun::java2d::pipe::AATileGenerator, public ::sun::java2d::marlin::MarlinConst {
	$class(MarlinTileGenerator, 0, ::sun::java2d::pipe::AATileGenerator, ::sun::java2d::marlin::MarlinConst)
public:
	MarlinTileGenerator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::java2d::marlin::RendererStats* stats, ::sun::java2d::marlin::Renderer* r, ::sun::java2d::marlin::MarlinCache* cache);
	virtual void dispose() override;
	virtual void getAlpha($bytes* tile, int32_t offset, int32_t rowstride) override;
	void getAlphaNoRLE($bytes* tile, int32_t offset, int32_t rowstride);
	void getAlphaRLE($bytes* tile, int32_t offset, int32_t rowstride);
	void getBbox($ints* bbox);
	virtual int32_t getTileHeight() override;
	virtual int32_t getTileWidth() override;
	virtual int32_t getTypicalAlpha() override;
	static $String* hex(int32_t v, int32_t d);
	::sun::java2d::marlin::MarlinTileGenerator* init();
	virtual void nextTile() override;
	virtual $String* toString() override;
	static const bool DISABLE_BLEND = false;
	static int32_t MAX_TILE_ALPHA_SUM;
	static int32_t TH_AA_ALPHA_FILL_EMPTY;
	static int32_t TH_AA_ALPHA_FILL_FULL;
	static int32_t FILL_TILE_W;
	::sun::java2d::marlin::Renderer* renderer = nullptr;
	::sun::java2d::marlin::MarlinCache* cache = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	::sun::java2d::marlin::RendererStats* rdrStats = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("DISABLE_BLEND")
#pragma pop_macro("FILL_TILE_W")
#pragma pop_macro("MAX_TILE_ALPHA_SUM")
#pragma pop_macro("TH_AA_ALPHA_FILL_EMPTY")
#pragma pop_macro("TH_AA_ALPHA_FILL_FULL")

#endif // _sun_java2d_marlin_MarlinTileGenerator_h_