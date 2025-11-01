#ifndef _java_awt_Dimension_h_
#define _java_awt_Dimension_h_
//$ class java.awt.Dimension
//$ extends java.awt.geom.Dimension2D
//$ implements java.io.Serializable

#include <java/awt/geom/Dimension2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {

class $export Dimension : public ::java::awt::geom::Dimension2D, public ::java::io::Serializable {
	$class(Dimension, 0, ::java::awt::geom::Dimension2D, ::java::io::Serializable)
public:
	Dimension();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	void init$(::java::awt::Dimension* d);
	void init$(int32_t width, int32_t height);
	virtual bool equals(Object$* obj) override;
	virtual double getHeight() override;
	virtual ::java::awt::Dimension* getSize();
	virtual double getWidth() override;
	virtual int32_t hashCode() override;
	static void initIDs();
	using ::java::awt::geom::Dimension2D::setSize;
	virtual void setSize(double width, double height) override;
	virtual void setSize(::java::awt::Dimension* d);
	virtual void setSize(int32_t width, int32_t height);
	virtual $String* toString() override;
	int32_t width = 0;
	int32_t height = 0;
	static const int64_t serialVersionUID = (int64_t)0x418ED9D7AC5F4414;
};

	} // awt
} // java

#endif // _java_awt_Dimension_h_