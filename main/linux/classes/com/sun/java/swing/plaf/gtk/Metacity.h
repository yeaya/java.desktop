#ifndef _com_sun_java_swing_plaf_gtk_Metacity_h_
#define _com_sun_java_swing_plaf_gtk_Metacity_h_
//$ class com.sun.java.swing.plaf.gtk.Metacity
//$ extends javax.swing.plaf.synth.SynthConstants

#include <java/lang/Array.h>
#include <javax/swing/plaf/synth/SynthConstants.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class Metacity$ArithmeticExpressionEvaluator;
						class Metacity$ColorizeImageFilter;
						class Metacity$RoundRectClipShape;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Graphics;
		class Image;
		class Insets;
		class LayoutManager;
		class Rectangle;
		class Shape;
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
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
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilder;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class NamedNodeMap;
			class Node;
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class Metacity : public ::javax::swing::plaf::synth::SynthConstants {
	$class(Metacity, 0, ::javax::swing::plaf::synth::SynthConstants)
public:
	Metacity();
	void init$($String* themeName);
	virtual ::java::awt::Dimension* calculateButtonSize(::javax::swing::JComponent* titlePane);
	virtual ::java::awt::Rectangle* calculateTitleArea(::javax::swing::JInternalFrame* jif);
	virtual int32_t calculateTitleTextWidth(::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	virtual void draw(::org::w3c::dom::Node* draw_ops, ::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	virtual void drawArc(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawButton(::org::w3c::dom::Node* frame_style, $String* function, $String* state, ::java::awt::Graphics* g, int32_t w, int32_t h, ::javax::swing::JInternalFrame* jif);
	virtual void drawGTKArrow(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawGTKBox(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawGTKVLine(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawGradient(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawIcon(::org::w3c::dom::Node* node, ::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	virtual void drawImage(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawInclude(::org::w3c::dom::Node* node, ::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	virtual void drawLine(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawPiece(::org::w3c::dom::Node* frame_style, ::java::awt::Graphics* g, $String* position, int32_t x, int32_t y, int32_t width, int32_t height, ::javax::swing::JInternalFrame* jif);
	virtual void drawRectangle(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawTile(::org::w3c::dom::Node* node, ::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	virtual void drawTint(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void drawTitle(::org::w3c::dom::Node* node, ::java::awt::Graphics* g, ::javax::swing::JInternalFrame* jif);
	static ::javax::swing::JComponent* findChild(::javax::swing::JComponent* parent, $String* name);
	virtual ::javax::swing::JInternalFrame* findInternalFrame(::java::awt::Component* comp);
	virtual bool getBoolean($String* key, bool fallback);
	virtual bool getBooleanAttr(::org::w3c::dom::Node* node, $String* name, bool fallback);
	virtual ::java::awt::Insets* getBorderInsets(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Insets* insets);
	virtual float getFloatAttr(::org::w3c::dom::Node* node, $String* name, float fallback);
	virtual ::java::util::Map* getFrameGeometry();
	virtual ::java::awt::Image* getImage($String* key, ::java::awt::Color* c);
	virtual ::java::awt::Image* getImage($String* key);
	virtual int32_t getInt($String* key);
	virtual int32_t getIntAttr(::org::w3c::dom::Node* node, $String* name, int32_t fallback);
	virtual ::org::w3c::dom::Node* getNode($String* tagName, $StringArray* attrs);
	virtual ::org::w3c::dom::Node* getNode(::org::w3c::dom::Node* parent, $String* name, $StringArray* attrs);
	virtual ::org::w3c::dom::Node* getNode(::org::w3c::dom::NodeList* nodes, $String* name, $StringArray* attrs);
	virtual $Array<::org::w3c::dom::Node>* getNodesByName(::org::w3c::dom::Node* parent, $String* name);
	::java::awt::Shape* getRoundedClipShape(int32_t x, int32_t y, int32_t w, int32_t h, int32_t arcw, int32_t arch, int32_t corners);
	virtual $String* getStringAttr(::org::w3c::dom::Node* node, $String* name);
	virtual $String* getStringAttr(::org::w3c::dom::NamedNodeMap* attrs, $String* name);
	static ::java::net::URL* getThemeDir($String* themeName);
	static ::java::awt::LayoutManager* getTitlePaneLayout();
	static $String* getUserTheme();
	static ::org::w3c::dom::Document* getXMLDoc(::java::net::URL* xmlFile);
	static void logError($String* themeName, ::java::lang::Exception* ex);
	static void logError($String* themeName, $String* msg);
	virtual void paintButtonBackground(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintFrameBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x0, int32_t y0, int32_t width, int32_t height);
	virtual ::java::awt::Color* parseColor($String* str);
	virtual ::java::awt::Color* parseColor2($String* str);
	static ::java::awt::Color* parseColorString($String* str);
	virtual void setClip(::org::w3c::dom::Node* node, ::java::awt::Graphics* g);
	virtual void setFrameGeometry(::javax::swing::JComponent* titlePane, ::java::util::Map* gm);
	virtual void tileImage(::java::awt::Graphics* g, ::java::awt::Image* image, int32_t x0, int32_t y0, int32_t w, int32_t h, $floats* alphas);
	void updateFrameGeometry(::javax::swing::plaf::synth::SynthContext* context);
	static bool $assertionsDisabled;
	static ::com::sun::java::swing::plaf::gtk::Metacity* INSTANCE;
	static $StringArray* themeNames;
	static bool errorLogged;
	static ::javax::xml::parsers::DocumentBuilder* documentBuilder;
	static ::org::w3c::dom::Document* xmlDoc;
	static $String* userHome;
	::org::w3c::dom::Node* frame_style_set = nullptr;
	::java::util::Map* frameGeometry = nullptr;
	::java::util::Map* frameGeometries = nullptr;
	::java::awt::LayoutManager* titlePaneLayout = nullptr;
	::com::sun::java::swing::plaf::gtk::Metacity$ColorizeImageFilter* imageFilter = nullptr;
	::java::net::URL* themeDir = nullptr;
	::javax::swing::plaf::synth::SynthContext* context = nullptr;
	$String* themeName = nullptr;
	::com::sun::java::swing::plaf::gtk::Metacity$ArithmeticExpressionEvaluator* aee = nullptr;
	::java::util::Map* variables = nullptr;
	::com::sun::java::swing::plaf::gtk::Metacity$RoundRectClipShape* roundedClipShape = nullptr;
	::java::util::HashMap* images = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("INSTANCE")

#endif // _com_sun_java_swing_plaf_gtk_Metacity_h_