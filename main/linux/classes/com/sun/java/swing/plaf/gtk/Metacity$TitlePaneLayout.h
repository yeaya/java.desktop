#ifndef _com_sun_java_swing_plaf_gtk_Metacity$TitlePaneLayout_h_
#define _com_sun_java_swing_plaf_gtk_Metacity$TitlePaneLayout_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity$TitlePaneLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class Metacity;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity$TitlePaneLayout : public ::java::awt::LayoutManager {
	$class(Metacity$TitlePaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	Metacity$TitlePaneLayout();
	void init$(::com::sun::java::swing::plaf::gtk::Metacity* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::com::sun::java::swing::plaf::gtk::Metacity* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_Metacity$TitlePaneLayout_h_