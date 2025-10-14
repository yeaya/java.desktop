#ifndef _javax_swing_text_html_ImageView_h_
#define _javax_swing_text_html_ImageView_h_
//$ class javax.swing.text.html.ImageView
//$ extends javax.swing.text.View

#include <java/lang/Array.h>
#include <javax/swing/text/View.h>

#pragma push_macro("DEFAULT_BORDER")
#undef DEFAULT_BORDER
#pragma push_macro("DEFAULT_HEIGHT")
#undef DEFAULT_HEIGHT
#pragma push_macro("DEFAULT_WIDTH")
#undef DEFAULT_WIDTH
#pragma push_macro("HEIGHT_FLAG")
#undef HEIGHT_FLAG
#pragma push_macro("IMAGE_CACHE_PROPERTY")
#undef IMAGE_CACHE_PROPERTY
#pragma push_macro("LINK_FLAG")
#undef LINK_FLAG
#pragma push_macro("LOADING_FLAG")
#undef LOADING_FLAG
#pragma push_macro("MISSING_IMAGE")
#undef MISSING_IMAGE
#pragma push_macro("PENDING_IMAGE")
#undef PENDING_IMAGE
#pragma push_macro("RELOAD_FLAG")
#undef RELOAD_FLAG
#pragma push_macro("RELOAD_IMAGE_FLAG")
#undef RELOAD_IMAGE_FLAG
#pragma push_macro("SYNC_LOAD_FLAG")
#undef SYNC_LOAD_FLAG
#pragma push_macro("WIDTH_FLAG")
#undef WIDTH_FLAG

namespace java {
	namespace awt {
		class Color;
		class Container;
		class Dimension;
		class Graphics;
		class Image;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Attribute;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export ImageView : public ::javax::swing::text::View {
	$class(ImageView, 0, ::javax::swing::text::View)
public:
	ImageView();
	void init$(::javax::swing::text::Element* elem);
	::java::awt::Dimension* adjustWidthHeight(int32_t newWidth, int32_t newHeight);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual float getAlignment(int32_t axis) override;
	virtual $String* getAltText();
	::javax::swing::text::View* getAltView();
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual ::java::awt::Image* getImage();
	::java::awt::Image* getImage(bool enabled);
	virtual ::java::net::URL* getImageURL();
	int32_t getIntAttr(::javax::swing::text::html::HTML$Attribute* name, int32_t deflt);
	virtual ::javax::swing::Icon* getLoadingImageIcon();
	virtual bool getLoadsSynchronously();
	virtual ::javax::swing::Icon* getNoImageIcon();
	virtual float getPreferredSpan(int32_t axis) override;
	float getPreferredSpanFromAltView(int32_t axis);
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual $String* getToolTipText(float x, float y, ::java::awt::Shape* allocation) override;
	bool hasPixels(::java::awt::Image* image);
	bool isLink();
	void loadImage();
	using ::javax::swing::text::View::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	void paintBorder(::java::awt::Graphics* g, ::java::awt::Rectangle* rect);
	void paintHighlights(::java::awt::Graphics* g, ::java::awt::Shape* shape);
	void refreshImage();
	void repaint(int64_t delay);
	void safePreferenceChanged();
	virtual void setLoadsSynchronously(bool newValue);
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setPropertiesFromAttributes();
	virtual void setSize(float width, float height) override;
	void sync();
	void updateAltTextView();
	void updateImageSize();
	using ::javax::swing::text::View::viewToModel;
	virtual int32_t viewToModel(float x, float y, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	static bool sIsInc;
	static int32_t sIncRate;
	static $String* PENDING_IMAGE;
	static $String* MISSING_IMAGE;
	static $String* IMAGE_CACHE_PROPERTY;
	static const int32_t DEFAULT_WIDTH = 38;
	static const int32_t DEFAULT_HEIGHT = 38;
	static const int32_t DEFAULT_BORDER = 2;
	static const int32_t LOADING_FLAG = 1;
	static const int32_t LINK_FLAG = 2;
	static const int32_t WIDTH_FLAG = 4;
	static const int32_t HEIGHT_FLAG = 8;
	static const int32_t RELOAD_FLAG = 16;
	static const int32_t RELOAD_IMAGE_FLAG = 32;
	static const int32_t SYNC_LOAD_FLAG = 64;
	::javax::swing::text::AttributeSet* attr = nullptr;
	::java::awt::Image* image = nullptr;
	::java::awt::Image* disabledImage = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t state = 0;
	::java::awt::Container* container = nullptr;
	::java::awt::Rectangle* fBounds = nullptr;
	::java::awt::Color* borderColor = nullptr;
	int16_t borderSize = 0;
	int16_t leftInset = 0;
	int16_t rightInset = 0;
	int16_t topInset = 0;
	int16_t bottomInset = 0;
	::java::awt::image::ImageObserver* imageObserver = nullptr;
	::javax::swing::text::View* altView = nullptr;
	float vAlign = 0.0;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("DEFAULT_BORDER")
#pragma pop_macro("DEFAULT_HEIGHT")
#pragma pop_macro("DEFAULT_WIDTH")
#pragma pop_macro("HEIGHT_FLAG")
#pragma pop_macro("IMAGE_CACHE_PROPERTY")
#pragma pop_macro("LINK_FLAG")
#pragma pop_macro("LOADING_FLAG")
#pragma pop_macro("MISSING_IMAGE")
#pragma pop_macro("PENDING_IMAGE")
#pragma pop_macro("RELOAD_FLAG")
#pragma pop_macro("RELOAD_IMAGE_FLAG")
#pragma pop_macro("SYNC_LOAD_FLAG")
#pragma pop_macro("WIDTH_FLAG")

#endif // _javax_swing_text_html_ImageView_h_