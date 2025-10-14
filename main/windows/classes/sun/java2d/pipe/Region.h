#ifndef _sun_java2d_pipe_Region_h_
#define _sun_java2d_pipe_Region_h_
//$ class sun.java2d.pipe.Region
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_REGION")
#undef EMPTY_REGION
#pragma push_macro("GROW_SIZE")
#undef GROW_SIZE
#pragma push_macro("INCLUDE_A")
#undef INCLUDE_A
#pragma push_macro("INCLUDE_B")
#undef INCLUDE_B
#pragma push_macro("INCLUDE_COMMON")
#undef INCLUDE_COMMON
#pragma push_macro("INIT_SIZE")
#undef INIT_SIZE
#pragma push_macro("WHOLE_REGION")
#undef WHOLE_REGION

namespace java {
	namespace awt {
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class RegionIterator;
			class SpanIterator;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class Region : public ::java::lang::Object {
	$class(Region, 0, ::java::lang::Object)
public:
	Region();
	void init$(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	void init$(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $ints* bands, int32_t end);
	void appendSpan($ints* box);
	void appendSpans(::sun::java2d::pipe::SpanIterator* si);
	void calcBBox();
	static int32_t clipAdd(int32_t v, int32_t dv);
	void clipBoxToBounds($ints* bbox);
	static int32_t clipRound(double coordinate);
	static int32_t clipScale(int32_t v, double sv);
	bool contains(int32_t x, int32_t y);
	static int32_t dimAdd(int32_t start, int32_t dim);
	bool encompasses(::sun::java2d::pipe::Region* r);
	bool encompassesXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	bool encompassesXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	void endRow($ints* box);
	virtual bool equals(Object$* o) override;
	::sun::java2d::pipe::SpanIterator* filter(::sun::java2d::pipe::SpanIterator* si);
	void filterSpans(::sun::java2d::pipe::Region* ra, ::sun::java2d::pipe::Region* rb, int32_t flags);
	void getBounds($ints* pathbox);
	::sun::java2d::pipe::Region* getBoundsIntersection(::java::awt::Rectangle* r);
	::sun::java2d::pipe::Region* getBoundsIntersection(::sun::java2d::pipe::Region* r);
	::sun::java2d::pipe::Region* getBoundsIntersectionXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	::sun::java2d::pipe::Region* getBoundsIntersectionXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	::sun::java2d::pipe::Region* getDifference(::sun::java2d::pipe::Region* r);
	::sun::java2d::pipe::Region* getExclusiveOr(::sun::java2d::pipe::Region* r);
	int32_t getHeight();
	int32_t getHiX();
	int32_t getHiY();
	static ::sun::java2d::pipe::Region* getInstance(::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at);
	static ::sun::java2d::pipe::Region* getInstance(::sun::java2d::pipe::Region* devBounds, ::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at);
	static ::sun::java2d::pipe::Region* getInstance(::sun::java2d::pipe::Region* devBounds, bool normalize, ::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at);
	static ::sun::java2d::pipe::Region* getInstance(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $ints* edges);
	static ::sun::java2d::pipe::Region* getInstance(::java::awt::Rectangle* r);
	static ::sun::java2d::pipe::Region* getInstance($ints* box);
	static ::sun::java2d::pipe::Region* getInstance($ints* box, ::sun::java2d::pipe::SpanIterator* si);
	static ::sun::java2d::pipe::Region* getInstanceXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	static ::sun::java2d::pipe::Region* getInstanceXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	::sun::java2d::pipe::Region* getIntersection(::java::awt::Rectangle* r);
	::sun::java2d::pipe::Region* getIntersection(::java::awt::geom::Rectangle2D* r);
	::sun::java2d::pipe::Region* getIntersection(::sun::java2d::pipe::Region* r);
	::sun::java2d::pipe::Region* getIntersectionXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	::sun::java2d::pipe::Region* getIntersectionXYXY(double lox, double loy, double hix, double hiy);
	::sun::java2d::pipe::Region* getIntersectionXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	::sun::java2d::pipe::RegionIterator* getIterator();
	int32_t getLoX();
	int32_t getLoY();
	::sun::java2d::pipe::Region* getSafeTranslatedRegion(int32_t dx, int32_t dy);
	::sun::java2d::pipe::Region* getScaledRegion(double sx, double sy);
	::sun::java2d::pipe::SpanIterator* getSpanIterator();
	::sun::java2d::pipe::SpanIterator* getSpanIterator($ints* bbox);
	::sun::java2d::pipe::Region* getTranslatedRegion(int32_t dx, int32_t dy);
	::sun::java2d::pipe::Region* getUnion(::sun::java2d::pipe::Region* r);
	int32_t getWidth();
	virtual int32_t hashCode() override;
	static void initIDs();
	bool intersectsQuickCheck(::sun::java2d::pipe::Region* r);
	bool intersectsQuickCheckXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	bool isEmpty();
	bool isInsideQuickCheck(::sun::java2d::pipe::Region* r);
	bool isInsideXYWH(int32_t x, int32_t y, int32_t w, int32_t h);
	bool isInsideXYXY(int32_t lox, int32_t loy, int32_t hix, int32_t hiy);
	bool isRectangular();
	void needSpace(int32_t num);
	virtual $String* toString() override;
	static const int32_t INIT_SIZE = 50;
	static const int32_t GROW_SIZE = 50;
	static ::sun::java2d::pipe::Region* EMPTY_REGION;
	static ::sun::java2d::pipe::Region* WHOLE_REGION;
	int32_t lox = 0;
	int32_t loy = 0;
	int32_t hix = 0;
	int32_t hiy = 0;
	int32_t endIndex = 0;
	$ints* bands = nullptr;
	static const int32_t INCLUDE_A = 1;
	static const int32_t INCLUDE_B = 2;
	static const int32_t INCLUDE_COMMON = 4;
};

		} // pipe
	} // java2d
} // sun

#pragma pop_macro("EMPTY_REGION")
#pragma pop_macro("GROW_SIZE")
#pragma pop_macro("INCLUDE_A")
#pragma pop_macro("INCLUDE_B")
#pragma pop_macro("INCLUDE_COMMON")
#pragma pop_macro("INIT_SIZE")
#pragma pop_macro("WHOLE_REGION")

#endif // _sun_java2d_pipe_Region_h_