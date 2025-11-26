#ifndef _com_sun_java_swing_plaf_gtk_GTKIconFactory$DelegatingIcon_h_
#define _com_sun_java_swing_plaf_gtk_GTKIconFactory$DelegatingIcon_h_
//$ class com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon
//$ extends javax.swing.plaf.UIResource
//$ implements javax.swing.plaf.synth.SynthIcon

#include <java/lang/Array.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/SynthIcon.h>

#pragma push_macro("PARAM_TYPES")
#undef PARAM_TYPES

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKIconFactory$DelegatingIcon : public ::javax::swing::plaf::UIResource, public ::javax::swing::plaf::synth::SynthIcon {
	$class(GTKIconFactory$DelegatingIcon, 0, ::javax::swing::plaf::UIResource, ::javax::swing::plaf::synth::SynthIcon)
public:
	GTKIconFactory$DelegatingIcon();
	using ::javax::swing::plaf::synth::SynthIcon::getIconWidth;
	using ::javax::swing::plaf::synth::SynthIcon::getIconHeight;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* methodName);
	virtual int32_t getIconDimension(::javax::swing::plaf::synth::SynthContext* context);
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual ::java::lang::reflect::Method* getMethod();
	virtual $ClassArray* getMethodParamTypes();
	using ::javax::swing::plaf::synth::SynthIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void resetIconDimensions();
	::java::lang::reflect::Method* resolveMethod($String* name);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static $ClassArray* PARAM_TYPES;
	$Object* method = nullptr;
	int32_t iconDimension = 0;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("PARAM_TYPES")

#endif // _com_sun_java_swing_plaf_gtk_GTKIconFactory$DelegatingIcon_h_