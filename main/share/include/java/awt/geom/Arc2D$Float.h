#ifndef _java_awt_geom_Arc2D$Float_h_
#define _java_awt_geom_Arc2D$Float_h_
//$ class java.awt.geom.Arc2D$Float
//$ extends java.awt.geom.Arc2D
//$ implements java.io.Serializable

#include <java/awt/geom/Arc2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {
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

class $import Arc2D$Float : public ::java::awt::geom::Arc2D, public ::java::io::Serializable {
	$class(Arc2D$Float, $NO_CLASS_INIT, ::java::awt::geom::Arc2D, ::java::io::Serializable)
public:
	Arc2D$Float();
	using ::java::awt::geom::Arc2D::contains;
	using ::java::awt::geom::Arc2D::getPathIterator;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t type);
	void init$(float x, float y, float w, float h, float start, float extent, int32_t type);
	void init$(::java::awt::geom::Rectangle2D* ellipseBounds, float start, float extent, int32_t type);
	virtual double getAngleExtent() override;
	virtual double getAngleStart() override;
	virtual double getHeight() override;
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::Arc2D::intersects;
	virtual bool isEmpty() override;
	virtual ::java::awt::geom::Rectangle2D* makeBounds(double x, double y, double w, double h) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setAngleExtent(double angExt) override;
	using ::java::awt::geom::Arc2D::setAngleStart;
	virtual void setAngleStart(double angSt) override;
	using ::java::awt::geom::Arc2D::setArc;
	virtual void setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure) override;
	using ::java::awt::geom::Arc2D::setFrame;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	float x = 0.0;
	float y = 0.0;
	float width = 0.0;
	float height = 0.0;
	float start = 0.0;
	float extent = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x7EB772D1B8844FF6;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Arc2D$Float_h_