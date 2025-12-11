#ifndef _com_apple_laf_AquaHighlighter_h_
#define _com_apple_laf_AquaHighlighter_h_
//$ class com.apple.laf.AquaHighlighter
//$ extends javax.swing.text.DefaultHighlighter
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/DefaultHighlighter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class LayeredHighlighter$LayerPainter;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaHighlighter : public ::javax::swing::text::DefaultHighlighter, public ::javax::swing::plaf::UIResource {
	$class(AquaHighlighter, 0, ::javax::swing::text::DefaultHighlighter, ::javax::swing::plaf::UIResource)
public:
	AquaHighlighter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::swing::text::LayeredHighlighter$LayerPainter* getInstance();
	virtual $String* toString() override;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* instance;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaHighlighter_h_