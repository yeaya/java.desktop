#ifndef _javax_swing_plaf_basic_BasicIconFactory$EmptyFrameIcon_h_
#define _javax_swing_plaf_basic_BasicIconFactory$EmptyFrameIcon_h_
//$ class javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicIconFactory$EmptyFrameIcon : public ::javax::swing::Icon, public ::java::io::Serializable {
	$class(BasicIconFactory$EmptyFrameIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable)
public:
	BasicIconFactory$EmptyFrameIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	int32_t height = 0;
	int32_t width = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicIconFactory$EmptyFrameIcon_h_