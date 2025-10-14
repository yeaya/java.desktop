#ifndef _sun_swing_SwingUtilities2_h_
#define _sun_swing_SwingUtilities2_h_
//$ class sun.swing.SwingUtilities2
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("APP_CONTEXT_FRC_CACHE_KEY")
#undef APP_CONTEXT_FRC_CACHE_KEY
#pragma push_macro("BASICMENUITEMUI_MAX_TEXT_OFFSET")
#undef BASICMENUITEMUI_MAX_TEXT_OFFSET
#pragma push_macro("CACHE_SIZE")
#undef CACHE_SIZE
#pragma push_macro("CHAR_BUFFER_SIZE")
#undef CHAR_BUFFER_SIZE
#pragma push_macro("DEFAULT_FRC")
#undef DEFAULT_FRC
#pragma push_macro("IMPLIED_CR")
#undef IMPLIED_CR
#pragma push_macro("LAF_STATE_KEY")
#undef LAF_STATE_KEY
#pragma push_macro("MAX_CHAR_INDEX")
#undef MAX_CHAR_INDEX
#pragma push_macro("MENU_SELECTION_MANAGER_LISTENER_KEY")
#undef MENU_SELECTION_MANAGER_LISTENER_KEY
#pragma push_macro("MIN_CHAR_INDEX")
#undef MIN_CHAR_INDEX
#pragma push_macro("SKIP_CLICK_COUNT")
#undef SKIP_CLICK_COUNT

namespace java {
	namespace awt {
		class AWTEvent;
		class Color;
		class Component;
		class Font;
		class FontMetrics;
		class Graphics;
		class Graphics2D;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace font {
			class FontRenderContext;
			class TextLayout;
		}
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace lang {
		class Runnable;
		class StringBuilder;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
			class Future;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JList;
		class JTable;
		class ListSelectionModel;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeModelEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableColumnModel;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$Highlight;
			class JTextComponent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreeModel;
			class TreePath;
		}
	}
}
namespace sun {
	namespace swing {
		class StringUIClientPropertyKey;
		class SwingUtilities2$LSBCacheEntry;
		class SwingUtilities2$Section;
	}
}

namespace sun {
	namespace swing {

class $export SwingUtilities2 : public ::java::lang::Object {
	$class(SwingUtilities2, 0, ::java::lang::Object)
public:
	SwingUtilities2();
	void init$();
	static void adjustFocus(::javax::swing::JComponent* c);
	static bool canAccessSystemClipboard();
	static bool canCurrentEventAccessSystemClipboard();
	static bool canCurrentEventAccessSystemClipboard(bool checkGesture);
	static bool canEventAccessSystemClipboard(::java::awt::AWTEvent* e);
	static bool canEventAccessSystemClipboard(::java::awt::AWTEvent* e, bool checkGesture);
	static void checkAccess(int32_t modifiers);
	static $String* clipString(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string, int32_t availTextWidth);
	static $String* clipStringIfNecessary(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string, int32_t availTextWidth);
	static ::java::awt::Component* compositeRequestFocus(::java::awt::Component* component);
	static int32_t convertColumnIndexToModel(::javax::swing::table::TableColumnModel* cm, int32_t viewColumnIndex);
	static int32_t convertColumnIndexToView(::javax::swing::table::TableColumnModel* cm, int32_t modelColumnIndex);
	static ::java::awt::font::TextLayout* createTextLayout(::javax::swing::JComponent* c, $String* s, ::java::awt::Font* f, ::java::awt::font::FontRenderContext* frc);
	static $String* displayPropertiesToCSS(::java::awt::Font* font, ::java::awt::Color* fg);
	static int32_t drawChars(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $chars* data, int32_t offset, int32_t length, int32_t x, int32_t y);
	static float drawChars(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $chars* data, int32_t offset, int32_t length, float x, float y);
	static float drawChars(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $chars* data, int32_t offset, int32_t length, float x, float y, bool useFPAPI);
	static void drawHLine(::java::awt::Graphics* g, int32_t x1, int32_t x2, int32_t y);
	static void drawRect(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	static void drawString(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $String* text, int32_t x, int32_t y);
	static void drawString(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $String* text, float x, float y, bool useFPAPI);
	static float drawString(::javax::swing::JComponent* c, ::java::awt::Graphics* g, ::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y);
	static float drawString(::javax::swing::JComponent* c, ::java::awt::Graphics* g, ::java::text::AttributedCharacterIterator* iterator, float x, float y);
	static float drawStringImpl(::javax::swing::JComponent* c, ::java::awt::Graphics* g, ::java::text::AttributedCharacterIterator* iterator, float x, float y);
	static void drawStringUnderlineCharAt(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $String* text, int32_t underlinedIndex, int32_t x, int32_t y);
	static void drawStringUnderlineCharAt(::javax::swing::JComponent* c, ::java::awt::Graphics* g, $String* text, int32_t underlinedIndex, float x, float y, bool useFPAPI);
	static void drawVLine(::java::awt::Graphics* g, int32_t x, int32_t y1, int32_t y2);
	static void execute(::java::lang::Runnable* command);
	static int32_t getAdjustedClickCount(::javax::swing::text::JTextComponent* comp, ::java::awt::event::MouseEvent* e);
	static $Object* getAndSetAntialisingHintForScaledGraphics(::java::awt::Graphics* g);
	static bool getBoolean(::javax::swing::JComponent* component, $String* key);
	static ::java::awt::font::FontRenderContext* getFRCFromCache(::java::awt::geom::AffineTransform* tx, Object$* aaHint);
	static ::java::awt::font::FontRenderContext* getFRCProperty(::javax::swing::JComponent* c);
	static float getFontCharWidth(char16_t c, ::java::awt::FontMetrics* fm, bool useFPAPI);
	static float getFontCharsWidth($chars* data, int32_t offset, int32_t len, ::java::awt::FontMetrics* fm, bool useFPAPI);
	static ::java::awt::FontMetrics* getFontMetrics(::javax::swing::JComponent* c, ::java::awt::Graphics* g);
	static ::java::awt::FontMetrics* getFontMetrics(::javax::swing::JComponent* c, ::java::awt::Graphics* g, ::java::awt::Font* font);
	static ::java::awt::FontMetrics* getFontMetrics(::javax::swing::JComponent* c, ::java::awt::Font* font);
	static ::java::awt::font::FontRenderContext* getFontRenderContext(::java::awt::Component* c);
	static ::java::awt::font::FontRenderContext* getFontRenderContext(::java::awt::Component* c, ::java::awt::FontMetrics* fm);
	static float getFontStringWidth($String* data, ::java::awt::FontMetrics* fm, bool useFPAPI);
	static ::java::awt::Graphics2D* getGraphics2D(::java::awt::Graphics* g);
	static $bytes* getIconBytes($Class* baseClass, $Class* rootClass, $String* imageFile);
	static int32_t getLeftSideBearing(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string);
	static int32_t getLeftSideBearing(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, char16_t firstChar);
	static int32_t getSystemMnemonicKeyMask();
	static ::javax::swing::tree::TreePath* getTreePath(::javax::swing::event::TreeModelEvent* event, ::javax::swing::tree::TreeModel* model);
	static ::java::text::AttributedCharacterIterator* getTrimmedTrailingSpacesIterator(::java::text::AttributedCharacterIterator* iterator);
	static int32_t getUIDefaultsInt(Object$* key);
	static int32_t getUIDefaultsInt(Object$* key, ::java::util::Locale* l);
	static int32_t getUIDefaultsInt(Object$* key, int32_t defaultValue);
	static int32_t getUIDefaultsInt(Object$* key, ::java::util::Locale* l, int32_t defaultValue);
	static bool isAccessClipboardGesture(::java::awt::event::InputEvent* ie);
	static bool isComplexLayout($chars* text, int32_t start, int32_t limit);
	static bool isFloatingPointScale(::java::awt::geom::AffineTransform* tx);
	static bool isFontRenderContextPrintCompatible(::java::awt::font::FontRenderContext* frc1, ::java::awt::font::FontRenderContext* frc2);
	static bool isLocalDisplay();
	static bool isPrinting(::java::awt::Graphics* g);
	static bool isScaleChanged(::java::beans::PropertyChangeEvent* ev);
	static bool isScaleChanged($String* name, Object$* oldValue, Object$* newValue);
	static bool isScaledGraphics(::java::awt::Graphics* g);
	static bool isTrustedContext();
	static $bytes* lambda$makeIcon$0($Class* baseClass, $Class* rootClass, $String* imageFile);
	static $Object* lambda$makeIcon$1(bool enablePrivileges, $Class* baseClass, $Class* rootClass, $String* imageFile, ::javax::swing::UIDefaults* table);
	static ::sun::swing::SwingUtilities2$Section* liesIn(::java::awt::Rectangle* rect, ::java::awt::Point* p, bool horizontal, bool ltr, bool three);
	static ::sun::swing::SwingUtilities2$Section* liesInHorizontal(::java::awt::Rectangle* rect, ::java::awt::Point* p, bool ltr, bool three);
	static ::sun::swing::SwingUtilities2$Section* liesInVertical(::java::awt::Rectangle* rect, ::java::awt::Point* p, bool three);
	static int32_t loc2IndexFileList(::javax::swing::JList* list, ::java::awt::Point* point);
	static $Object* makeIcon($Class* baseClass, $Class* rootClass, $String* imageFile);
	static $Object* makeIcon($Class* baseClass, $Class* rootClass, $String* imageFile, bool enablePrivileges);
	static $Object* makeIcon_Unprivileged($Class* baseClass, $Class* rootClass, $String* imageFile);
	static bool pointIsInActualBounds(::javax::swing::JList* list, int32_t index, ::java::awt::Point* point);
	static bool pointOutsidePrefSize(::javax::swing::JTable* table, int32_t row, int32_t column, ::java::awt::Point* p);
	static void putAATextInfo(bool lafCondition, ::java::util::Map* map);
	static int32_t setAltGraphMask(int32_t modifier);
	static void setAntialiasingHintForScaledGraphics(::java::awt::Graphics* g, Object$* hint);
	static void setLeadAnchorWithoutSelection(::javax::swing::ListSelectionModel* model, int32_t lead, int32_t anchor);
	static void setSkipClickCount(::java::awt::Component* comp, int32_t count);
	static bool shouldIgnore(::java::awt::event::MouseEvent* me, ::javax::swing::JComponent* c);
	static int32_t stringWidth(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string);
	static float stringWidth(::javax::swing::JComponent* c, ::java::awt::FontMetrics* fm, $String* string, bool useFPAPI);
	static ::java::util::concurrent::Future* submit(::java::util::concurrent::Callable* task);
	static ::java::util::concurrent::Future* submit(::java::lang::Runnable* task, Object$* result);
	static int32_t syncCharsBuffer($String* s);
	static bool tabbedPaneChangeFocusTo(::java::awt::Component* comp);
	static $String* trimTrailingSpaces($String* s);
	static bool useSelectedTextColor(::javax::swing::text::Highlighter$Highlight* h, ::javax::swing::text::JTextComponent* c);
	static bool $assertionsDisabled;
	static $Object* LAF_STATE_KEY;
	static $Object* MENU_SELECTION_MANAGER_LISTENER_KEY;
	static $Array<::sun::swing::SwingUtilities2$LSBCacheEntry>* fontCache;
	static const int32_t CACHE_SIZE = 6;
	static int32_t nextIndex;
	static ::sun::swing::SwingUtilities2$LSBCacheEntry* searchKey;
	static const int32_t MIN_CHAR_INDEX = (int32_t)((char16_t)87);
	static const int32_t MAX_CHAR_INDEX = 88; // (int32_t)((char16_t)87) + 1
	static ::java::awt::font::FontRenderContext* DEFAULT_FRC;
	static $String* IMPLIED_CR;
	static ::java::lang::StringBuilder* SKIP_CLICK_COUNT;
	static ::sun::swing::StringUIClientPropertyKey* BASICMENUITEMUI_MAX_TEXT_OFFSET;
	static $String* UntrustedClipboardAccess;
	static const int32_t CHAR_BUFFER_SIZE = 100;
	static $Object* charsBufferLock;
	static $chars* charsBuffer;
	static $Object* APP_CONTEXT_FRC_CACHE_KEY;
};

	} // swing
} // sun

#pragma pop_macro("APP_CONTEXT_FRC_CACHE_KEY")
#pragma pop_macro("BASICMENUITEMUI_MAX_TEXT_OFFSET")
#pragma pop_macro("CACHE_SIZE")
#pragma pop_macro("CHAR_BUFFER_SIZE")
#pragma pop_macro("DEFAULT_FRC")
#pragma pop_macro("IMPLIED_CR")
#pragma pop_macro("LAF_STATE_KEY")
#pragma pop_macro("MAX_CHAR_INDEX")
#pragma pop_macro("MENU_SELECTION_MANAGER_LISTENER_KEY")
#pragma pop_macro("MIN_CHAR_INDEX")
#pragma pop_macro("SKIP_CLICK_COUNT")

#endif // _sun_swing_SwingUtilities2_h_