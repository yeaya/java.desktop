#ifndef _javax_swing_plaf_synth_SynthParser$LazyImageIcon_h_
#define _javax_swing_plaf_synth_SynthParser$LazyImageIcon_h_
//$ class javax.swing.plaf.synth.SynthParser$LazyImageIcon
//$ extends javax.swing.ImageIcon
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Image;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthParser$LazyImageIcon : public ::javax::swing::ImageIcon, public ::javax::swing::plaf::UIResource {
	$class(SynthParser$LazyImageIcon, $NO_CLASS_INIT, ::javax::swing::ImageIcon, ::javax::swing::plaf::UIResource)
public:
	SynthParser$LazyImageIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::URL* location);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual ::java::awt::Image* getImage() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::java::net::URL* location = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthParser$LazyImageIcon_h_