#ifndef _com_sun_java_swing_plaf_gtk_GTKStyleFactory_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyleFactory_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyleFactory
//$ extends javax.swing.plaf.synth.SynthStyleFactory

#include <javax/swing/plaf/synth/SynthStyleFactory.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthStyle;
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

class GTKStyleFactory : public ::javax::swing::plaf::synth::SynthStyleFactory {
	$class(GTKStyleFactory, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthStyleFactory)
public:
	GTKStyleFactory();
	void init$();
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id) override;
	virtual void initStyles(::java::awt::Font* defaultFont);
	::java::util::Map* stylesCache = nullptr;
	::java::awt::Font* defaultFont = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKStyleFactory_h_