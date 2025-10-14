#ifndef _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$ScalableIconUIResource_h_
#define _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$ScalableIconUIResource_h_
//$ class com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$ScalableIconUIResource
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource

#include <java/lang/Array.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsInternalFrameTitlePane$ScalableIconUIResource : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource {
	$class(WindowsInternalFrameTitlePane$ScalableIconUIResource, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource)
public:
	WindowsInternalFrameTitlePane$ScalableIconUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($ObjectArray* objects);
	virtual ::javax::swing::Icon* getBestIcon(int32_t size);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static const int32_t SIZE = 16;
	$Array<::javax::swing::Icon>* icons = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("SIZE")

#endif // _com_sun_java_swing_plaf_windows_WindowsInternalFrameTitlePane$ScalableIconUIResource_h_