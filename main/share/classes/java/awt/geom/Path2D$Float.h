#ifndef _java_awt_geom_Path2D$Float_h_
#define _java_awt_geom_Path2D$Float_h_
//$ class java.awt.geom.Path2D$Float
//$ extends java.awt.geom.Path2D
//$ implements java.io.Serializable

#include <java/awt/geom/Path2D.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
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

class $export Path2D$Float : public ::java::awt::geom::Path2D, public ::java::io::Serializable {
	$class(Path2D$Float, 0, ::java::awt::geom::Path2D, ::java::io::Serializable)
public:
	Path2D$Float();
	using ::java::awt::geom::Path2D::append;
	using ::java::awt::geom::Path2D::getPathIterator;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t rule);
	void init$(int32_t rule, int32_t initialCapacity);
	void init$(::java::awt::Shape* s);
	void init$(::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at);
	virtual void append(float x, float y) override;
	virtual void append(double x, double y) override;
	virtual void append(::java::awt::geom::PathIterator* pi, bool connect) override;
	virtual $Object* clone() override;
	virtual $doubles* cloneCoordsDouble(::java::awt::geom::AffineTransform* at) override;
	virtual $floats* cloneCoordsFloat(::java::awt::geom::AffineTransform* at) override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	void curveTo(float x1, float y1, float x2, float y2, float x3, float y3);
	static $floats* expandCoords($floats* oldCoords, int32_t needed);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::PathIterator* getPathIterator(::java::awt::geom::AffineTransform* at) override;
	virtual ::java::awt::geom::Point2D* getPoint(int32_t coordindex) override;
	virtual void lineTo(double x, double y) override;
	void lineTo(float x, float y);
	virtual void moveTo(double x, double y) override;
	void moveTo(float x, float y);
	virtual void needRoom(bool needMove, int32_t newCoords) override;
	virtual int32_t pointCrossings(double px, double py) override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	void quadTo(float x1, float y1, float x2, float y2);
	using ::java::awt::geom::Path2D::readObject;
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t rectCrossings(double rxmin, double rymin, double rxmax, double rymax) override;
	virtual $String* toString() override;
	virtual void transform(::java::awt::geom::AffineTransform* at) override;
	virtual void trimToSize() override;
	using ::java::awt::geom::Path2D::writeObject;
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	$floats* floatCoords = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x61046D222872EE96;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Path2D$Float_h_