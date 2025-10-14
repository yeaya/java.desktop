#ifndef _java_awt_geom_Path2D_h_
#define _java_awt_geom_Path2D_h_
//$ class java.awt.geom.Path2D
//$ extends java.awt.Shape
//$ implements java.lang.Cloneable

#include <java/awt/Shape.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("EXPAND_MAX")
#undef EXPAND_MAX
#pragma push_macro("EXPAND_MAX_COORDS")
#undef EXPAND_MAX_COORDS
#pragma push_macro("EXPAND_MIN")
#undef EXPAND_MIN
#pragma push_macro("INIT_SIZE")
#undef INIT_SIZE
#pragma push_macro("SEG_CLOSE")
#undef SEG_CLOSE
#pragma push_macro("SEG_CUBICTO")
#undef SEG_CUBICTO
#pragma push_macro("SEG_LINETO")
#undef SEG_LINETO
#pragma push_macro("SEG_MOVETO")
#undef SEG_MOVETO
#pragma push_macro("SEG_QUADTO")
#undef SEG_QUADTO
#pragma push_macro("SERIAL_PATH_END")
#undef SERIAL_PATH_END
#pragma push_macro("SERIAL_SEG_CLOSE")
#undef SERIAL_SEG_CLOSE
#pragma push_macro("SERIAL_SEG_DBL_CUBICTO")
#undef SERIAL_SEG_DBL_CUBICTO
#pragma push_macro("SERIAL_SEG_DBL_LINETO")
#undef SERIAL_SEG_DBL_LINETO
#pragma push_macro("SERIAL_SEG_DBL_MOVETO")
#undef SERIAL_SEG_DBL_MOVETO
#pragma push_macro("SERIAL_SEG_DBL_QUADTO")
#undef SERIAL_SEG_DBL_QUADTO
#pragma push_macro("SERIAL_SEG_FLT_CUBICTO")
#undef SERIAL_SEG_FLT_CUBICTO
#pragma push_macro("SERIAL_SEG_FLT_LINETO")
#undef SERIAL_SEG_FLT_LINETO
#pragma push_macro("SERIAL_SEG_FLT_MOVETO")
#undef SERIAL_SEG_FLT_MOVETO
#pragma push_macro("SERIAL_SEG_FLT_QUADTO")
#undef SERIAL_SEG_FLT_QUADTO
#pragma push_macro("SERIAL_STORAGE_DBL_ARRAY")
#undef SERIAL_STORAGE_DBL_ARRAY
#pragma push_macro("SERIAL_STORAGE_FLT_ARRAY")
#undef SERIAL_STORAGE_FLT_ARRAY
#pragma push_macro("WIND_EVEN_ODD")
#undef WIND_EVEN_ODD
#pragma push_macro("WIND_NON_ZERO")
#undef WIND_NON_ZERO

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $export Path2D : public ::java::awt::Shape, public ::java::lang::Cloneable {
	$class(Path2D, 0, ::java::awt::Shape, ::java::lang::Cloneable)
public:
	Path2D();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Shape::getPathIterator;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t rule, int32_t initialTypes);
	virtual void append(float x, float y) {}
	virtual void append(double x, double y) {}
	void append(::java::awt::Shape* s, bool connect);
	virtual void append(::java::awt::geom::PathIterator* pi, bool connect) {}
	virtual $doubles* cloneCoordsDouble(::java::awt::geom::AffineTransform* at) {return nullptr;}
	virtual $floats* cloneCoordsFloat(::java::awt::geom::AffineTransform* at) {return nullptr;}
	void closePath();
	static bool contains(::java::awt::geom::PathIterator* pi, double x, double y);
	static bool contains(::java::awt::geom::PathIterator* pi, ::java::awt::geom::Point2D* p);
	virtual bool contains(double x, double y) override;
	virtual bool contains(::java::awt::geom::Point2D* p) override;
	static bool contains(::java::awt::geom::PathIterator* pi, double x, double y, double w, double h);
	static bool contains(::java::awt::geom::PathIterator* pi, ::java::awt::geom::Rectangle2D* r);
	virtual bool contains(double x, double y, double w, double h) override;
	virtual bool contains(::java::awt::geom::Rectangle2D* r) override;
	::java::awt::Shape* createTransformedShape(::java::awt::geom::AffineTransform* at);
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {}
	static $bytes* expandPointTypes($bytes* oldPointTypes, int32_t needed);
	virtual ::java::awt::Rectangle* getBounds() override;
	::java::awt::geom::Point2D* getCurrentPoint();
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at, double flatness) override;
	virtual ::java::awt::geom::Point2D* getPoint(int32_t coordindex) {return nullptr;}
	int32_t getWindingRule();
	static bool intersects(::java::awt::geom::PathIterator* pi, double x, double y, double w, double h);
	static bool intersects(::java::awt::geom::PathIterator* pi, ::java::awt::geom::Rectangle2D* r);
	virtual bool intersects(double x, double y, double w, double h) override;
	virtual bool intersects(::java::awt::geom::Rectangle2D* r) override;
	virtual void lineTo(double x, double y) {}
	virtual void moveTo(double x, double y) {}
	virtual void needRoom(bool needMove, int32_t newCoords) {}
	virtual int32_t pointCrossings(double px, double py) {return 0;}
	virtual void quadTo(double x1, double y1, double x2, double y2) {}
	void readObject(::java::io::ObjectInputStream* s, bool storedbl);
	virtual int32_t rectCrossings(double rxmin, double rymin, double rxmax, double rymax) {return 0;}
	void reset();
	void setWindingRule(int32_t rule);
	virtual $String* toString() override;
	virtual void transform(::java::awt::geom::AffineTransform* at) {}
	virtual void trimToSize() {}
	void writeObject(::java::io::ObjectOutputStream* s, bool isdbl);
	static bool $assertionsDisabled;
	static const int32_t WIND_EVEN_ODD = ::java::awt::geom::PathIterator::WIND_EVEN_ODD;
	static const int32_t WIND_NON_ZERO = ::java::awt::geom::PathIterator::WIND_NON_ZERO;
	static const int8_t SEG_MOVETO = (int8_t)::java::awt::geom::PathIterator::SEG_MOVETO;
	static const int8_t SEG_LINETO = (int8_t)::java::awt::geom::PathIterator::SEG_LINETO;
	static const int8_t SEG_QUADTO = (int8_t)::java::awt::geom::PathIterator::SEG_QUADTO;
	static const int8_t SEG_CUBICTO = (int8_t)::java::awt::geom::PathIterator::SEG_CUBICTO;
	static const int8_t SEG_CLOSE = (int8_t)::java::awt::geom::PathIterator::SEG_CLOSE;
	$bytes* pointTypes = nullptr;
	int32_t numTypes = 0;
	int32_t numCoords = 0;
	int32_t windingRule = 0;
	static const int32_t INIT_SIZE = 20;
	static const int32_t EXPAND_MAX = 500;
	static const int32_t EXPAND_MAX_COORDS = 1000; // EXPAND_MAX * 2
	static const int32_t EXPAND_MIN = 10;
	static const int8_t SERIAL_STORAGE_FLT_ARRAY = 48;
	static const int8_t SERIAL_STORAGE_DBL_ARRAY = 49;
	static const int8_t SERIAL_SEG_FLT_MOVETO = 64;
	static const int8_t SERIAL_SEG_FLT_LINETO = 65;
	static const int8_t SERIAL_SEG_FLT_QUADTO = 66;
	static const int8_t SERIAL_SEG_FLT_CUBICTO = 67;
	static const int8_t SERIAL_SEG_DBL_MOVETO = 80;
	static const int8_t SERIAL_SEG_DBL_LINETO = 81;
	static const int8_t SERIAL_SEG_DBL_QUADTO = 82;
	static const int8_t SERIAL_SEG_DBL_CUBICTO = 83;
	static const int8_t SERIAL_SEG_CLOSE = 96;
	static const int8_t SERIAL_PATH_END = 97;
};

		} // geom
	} // awt
} // java

#pragma pop_macro("EXPAND_MAX")
#pragma pop_macro("EXPAND_MAX_COORDS")
#pragma pop_macro("EXPAND_MIN")
#pragma pop_macro("INIT_SIZE")
#pragma pop_macro("SEG_CLOSE")
#pragma pop_macro("SEG_CUBICTO")
#pragma pop_macro("SEG_LINETO")
#pragma pop_macro("SEG_MOVETO")
#pragma pop_macro("SEG_QUADTO")
#pragma pop_macro("SERIAL_PATH_END")
#pragma pop_macro("SERIAL_SEG_CLOSE")
#pragma pop_macro("SERIAL_SEG_DBL_CUBICTO")
#pragma pop_macro("SERIAL_SEG_DBL_LINETO")
#pragma pop_macro("SERIAL_SEG_DBL_MOVETO")
#pragma pop_macro("SERIAL_SEG_DBL_QUADTO")
#pragma pop_macro("SERIAL_SEG_FLT_CUBICTO")
#pragma pop_macro("SERIAL_SEG_FLT_LINETO")
#pragma pop_macro("SERIAL_SEG_FLT_MOVETO")
#pragma pop_macro("SERIAL_SEG_FLT_QUADTO")
#pragma pop_macro("SERIAL_STORAGE_DBL_ARRAY")
#pragma pop_macro("SERIAL_STORAGE_FLT_ARRAY")
#pragma pop_macro("WIND_EVEN_ODD")
#pragma pop_macro("WIND_NON_ZERO")

#endif // _java_awt_geom_Path2D_h_