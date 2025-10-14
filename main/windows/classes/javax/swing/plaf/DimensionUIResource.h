#ifndef _javax_swing_plaf_DimensionUIResource_h_
#define _javax_swing_plaf_DimensionUIResource_h_
//$ class javax.swing.plaf.DimensionUIResource
//$ extends java.awt.Dimension
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Dimension.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $export DimensionUIResource : public ::java::awt::Dimension, public ::javax::swing::plaf::UIResource {
	$class(DimensionUIResource, $NO_CLASS_INIT, ::java::awt::Dimension, ::javax::swing::plaf::UIResource)
public:
	DimensionUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t width, int32_t height);
	using ::java::awt::Dimension::setSize;
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_DimensionUIResource_h_