#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI$StyleSheetUIResource.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI$FocusAction.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DEFAULT_STYLE
#undef FONT_ATTRIBUTE_KEY
#undef HONOR_DISPLAY_PROPERTIES
#undef NAME
#undef W3C_LENGTH_UNITS

using $ActionArray = $Array<::javax::swing::Action>;
using $StyleSheetArray = $Array<::javax::swing::text::html::StyleSheet>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI$StyleSheetUIResource = ::javax::swing::plaf::basic::BasicEditorPaneUI$StyleSheetUIResource;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $BasicTextUI$FocusAction = ::javax::swing::plaf::basic::BasicTextUI$FocusAction;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicEditorPaneUI_FieldInfo_[] = {
	{"FONT_ATTRIBUTE_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicEditorPaneUI, FONT_ATTRIBUTE_KEY)},
	{}
};

$MethodInfo _BasicEditorPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicEditorPaneUI::*)()>(&BasicEditorPaneUI::init$))},
	{"addActions", "(Ljavax/swing/ActionMap;[Ljavax/swing/Action;)V", nullptr, 0},
	{"cleanDisplayProperties", "()V", nullptr, 0},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicEditorPaneUI::createUI))},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"getEditorKit", "(Ljavax/swing/text/JTextComponent;)Ljavax/swing/text/EditorKit;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"removeActions", "(Ljavax/swing/ActionMap;[Ljavax/swing/Action;)V", nullptr, 0},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateCSS", "(Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicEditorPaneUI::*)($Font*,$Color*)>(&BasicEditorPaneUI::updateCSS))},
	{"updateDisplayProperties", "(Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, 0},
	{"updateFont", "(Ljava/awt/Font;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicEditorPaneUI::*)($Font*)>(&BasicEditorPaneUI::updateFont))},
	{"updateForeground", "(Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicEditorPaneUI::*)($Color*)>(&BasicEditorPaneUI::updateForeground))},
	{"updateStyle", "(Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicEditorPaneUI::*)($Font*,$Color*)>(&BasicEditorPaneUI::updateStyle))},
	{}
};

$InnerClassInfo _BasicEditorPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicEditorPaneUI$StyleSheetUIResource", "javax.swing.plaf.basic.BasicEditorPaneUI", "StyleSheetUIResource", $STATIC},
	{}
};

$ClassInfo _BasicEditorPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	"javax.swing.plaf.basic.BasicTextUI",
	nullptr,
	_BasicEditorPaneUI_FieldInfo_,
	_BasicEditorPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicEditorPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicEditorPaneUI$StyleSheetUIResource"
};

$Object* allocate$BasicEditorPaneUI($Class* clazz) {
	return $of($alloc(BasicEditorPaneUI));
}


$String* BasicEditorPaneUI::FONT_ATTRIBUTE_KEY = nullptr;

$ComponentUI* BasicEditorPaneUI::createUI($JComponent* c) {
	$init(BasicEditorPaneUI);
	return $new(BasicEditorPaneUI);
}

void BasicEditorPaneUI::init$() {
	$BasicTextUI::init$();
}

$String* BasicEditorPaneUI::getPropertyPrefix() {
	return "EditorPane"_s;
}

void BasicEditorPaneUI::installUI($JComponent* c) {
	$BasicTextUI::installUI(c);
	$var($Font, var$0, $nc(c)->getFont());
	updateDisplayProperties(var$0, $(c->getForeground()));
}

void BasicEditorPaneUI::uninstallUI($JComponent* c) {
	cleanDisplayProperties();
	$BasicTextUI::uninstallUI(c);
}

$EditorKit* BasicEditorPaneUI::getEditorKit($JTextComponent* tc) {
	$var($JEditorPane, pane, $cast($JEditorPane, getComponent()));
	return $nc(pane)->getEditorKit();
}

$ActionMap* BasicEditorPaneUI::getActionMap() {
	$var($ActionMap, am, $new($ActionMapUIResource));
	am->put("requestFocus"_s, $$new($BasicTextUI$FocusAction, this));
	$var($EditorKit, editorKit, getEditorKit($(getComponent())));
	if (editorKit != nullptr) {
		$var($ActionArray, actions, editorKit->getActions());
		if (actions != nullptr) {
			addActions(am, actions);
		}
	}
	$init($Action);
	$var($Object, var$0, $nc($($TransferHandler::getCutAction()))->getValue($Action::NAME));
	am->put(var$0, $($TransferHandler::getCutAction()));
	$var($Object, var$1, $nc($($TransferHandler::getCopyAction()))->getValue($Action::NAME));
	am->put(var$1, $($TransferHandler::getCopyAction()));
	$var($Object, var$2, $nc($($TransferHandler::getPasteAction()))->getValue($Action::NAME));
	am->put(var$2, $($TransferHandler::getPasteAction()));
	return am;
}

void BasicEditorPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$BasicTextUI::propertyChange(evt);
	$var($String, name, $nc(evt)->getPropertyName());
	if ("editorKit"_s->equals(name)) {
		$var($ActionMap, map, $SwingUtilities::getUIActionMap($(getComponent())));
		if (map != nullptr) {
			$var($Object, oldValue, evt->getOldValue());
			if ($instanceOf($EditorKit, oldValue)) {
				$var($ActionArray, actions, $nc(($cast($EditorKit, oldValue)))->getActions());
				if (actions != nullptr) {
					removeActions(map, actions);
				}
			}
			$var($Object, newValue, evt->getNewValue());
			if ($instanceOf($EditorKit, newValue)) {
				$var($ActionArray, actions, $nc(($cast($EditorKit, newValue)))->getActions());
				if (actions != nullptr) {
					addActions(map, actions);
				}
			}
		}
		updateFocusTraversalKeys();
	} else if ("editable"_s->equals(name)) {
		updateFocusTraversalKeys();
	} else {
		bool var$7 = "foreground"_s->equals(name);
		bool var$6 = var$7 || "font"_s->equals(name);
		bool var$5 = var$6 || "document"_s->equals(name);
		$init($JEditorPane);
		bool var$4 = var$5 || $nc($JEditorPane::W3C_LENGTH_UNITS)->equals(name);
		if (var$4 || $nc($JEditorPane::HONOR_DISPLAY_PROPERTIES)->equals(name)) {
			$var($JComponent, c, getComponent());
			$var($Font, var$8, $nc(c)->getFont());
			updateDisplayProperties(var$8, $(c->getForeground()));
			bool var$9 = $nc($JEditorPane::W3C_LENGTH_UNITS)->equals(name);
			if (var$9 || $nc($JEditorPane::HONOR_DISPLAY_PROPERTIES)->equals(name)) {
				modelChanged();
			}
			if ("foreground"_s->equals(name)) {
				$var($Object, honorDisplayPropertiesObject, $nc(c)->getClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES));
				bool honorDisplayProperties = false;
				if ($instanceOf($Boolean, honorDisplayPropertiesObject)) {
					honorDisplayProperties = $nc(($cast($Boolean, honorDisplayPropertiesObject)))->booleanValue();
				}
				if (honorDisplayProperties) {
					modelChanged();
				}
			}
		}
	}
}

void BasicEditorPaneUI::removeActions($ActionMap* map, $ActionArray* actions) {
	int32_t n = $nc(actions)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($Action, a, actions->get(i));
		$init($Action);
		$nc(map)->remove($($nc(a)->getValue($Action::NAME)));
	}
}

void BasicEditorPaneUI::addActions($ActionMap* map, $ActionArray* actions) {
	int32_t n = $nc(actions)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($Action, a, actions->get(i));
		$init($Action);
		$nc(map)->put($($nc(a)->getValue($Action::NAME)), a);
	}
}

void BasicEditorPaneUI::updateDisplayProperties($Font* font, $Color* fg) {
	$var($JComponent, c, getComponent());
	$init($JEditorPane);
	$var($Object, honorDisplayPropertiesObject, $nc(c)->getClientProperty($JEditorPane::HONOR_DISPLAY_PROPERTIES));
	bool honorDisplayProperties = false;
	$var($Object, w3cLengthUnitsObject, c->getClientProperty($JEditorPane::W3C_LENGTH_UNITS));
	bool w3cLengthUnits = false;
	if ($instanceOf($Boolean, honorDisplayPropertiesObject)) {
		honorDisplayProperties = $nc(($cast($Boolean, honorDisplayPropertiesObject)))->booleanValue();
	}
	if ($instanceOf($Boolean, w3cLengthUnitsObject)) {
		w3cLengthUnits = $nc(($cast($Boolean, w3cLengthUnitsObject)))->booleanValue();
	}
	if ($instanceOf($BasicTextPaneUI, this) || honorDisplayProperties) {
		$var($Document, doc, $nc($(getComponent()))->getDocument());
		if ($instanceOf($StyledDocument, doc)) {
			if ($instanceOf($HTMLDocument, doc) && honorDisplayProperties) {
				updateCSS(font, fg);
			} else {
				updateStyle(font, fg);
			}
		}
	} else {
		cleanDisplayProperties();
	}
	if (w3cLengthUnits) {
		$var($Document, doc, $nc($(getComponent()))->getDocument());
		if ($instanceOf($HTMLDocument, doc)) {
			$var($StyleSheet, documentStyleSheet, $nc(($cast($HTMLDocument, doc)))->getStyleSheet());
			$nc(documentStyleSheet)->addRule("W3C_LENGTH_UNITS_ENABLE"_s);
		}
	} else {
		$var($Document, doc, $nc($(getComponent()))->getDocument());
		if ($instanceOf($HTMLDocument, doc)) {
			$var($StyleSheet, documentStyleSheet, $nc(($cast($HTMLDocument, doc)))->getStyleSheet());
			$nc(documentStyleSheet)->addRule("W3C_LENGTH_UNITS_DISABLE"_s);
		}
	}
}

void BasicEditorPaneUI::cleanDisplayProperties() {
	$var($Document, document, $nc($(getComponent()))->getDocument());
	if ($instanceOf($HTMLDocument, document)) {
		$var($StyleSheet, documentStyleSheet, $nc(($cast($HTMLDocument, document)))->getStyleSheet());
		$var($StyleSheetArray, styleSheets, $nc(documentStyleSheet)->getStyleSheets());
		if (styleSheets != nullptr) {
			{
				$var($StyleSheetArray, arr$, styleSheets);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StyleSheet, s, arr$->get(i$));
					{
						if ($instanceOf($BasicEditorPaneUI$StyleSheetUIResource, s)) {
							documentStyleSheet->removeStyleSheet(s);
							documentStyleSheet->addRule("BASE_SIZE_DISABLE"_s);
							break;
						}
					}
				}
			}
		}
		$init($StyleContext);
		$var($Style, style, $nc(($cast($StyledDocument, document)))->getStyle($StyleContext::DEFAULT_STYLE));
		if ($nc(style)->getAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY) != nullptr) {
			style->removeAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY);
		}
	}
}

void BasicEditorPaneUI::updateCSS($Font* font, $Color* fg) {
	$var($JTextComponent, component, getComponent());
	$var($Document, document, $nc(component)->getDocument());
	if ($instanceOf($HTMLDocument, document)) {
		$var($StyleSheet, styleSheet, $new($BasicEditorPaneUI$StyleSheetUIResource));
		$var($StyleSheet, documentStyleSheet, $nc(($cast($HTMLDocument, document)))->getStyleSheet());
		$var($StyleSheetArray, styleSheets, $nc(documentStyleSheet)->getStyleSheets());
		if (styleSheets != nullptr) {
			{
				$var($StyleSheetArray, arr$, styleSheets);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($StyleSheet, s, arr$->get(i$));
					{
						if ($instanceOf($BasicEditorPaneUI$StyleSheetUIResource, s)) {
							documentStyleSheet->removeStyleSheet(s);
						}
					}
				}
			}
		}
		$var($String, cssRule, $SwingUtilities2::displayPropertiesToCSS(font, fg));
		styleSheet->addRule(cssRule);
		documentStyleSheet->addStyleSheet(styleSheet);
		documentStyleSheet->addRule($$str({"BASE_SIZE "_s, $$str($nc($(component->getFont()))->getSize())}));
		$init($StyleContext);
		$var($Style, style, $nc(($cast($StyledDocument, document)))->getStyle($StyleContext::DEFAULT_STYLE));
		if (!$nc(font)->equals($($nc(style)->getAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY)))) {
			$nc(style)->addAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY, font);
		}
	}
}

void BasicEditorPaneUI::updateStyle($Font* font, $Color* fg) {
	updateFont(font);
	updateForeground(fg);
}

void BasicEditorPaneUI::updateForeground($Color* color) {
	$var($StyledDocument, doc, $cast($StyledDocument, $nc($(getComponent()))->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	if (color == nullptr) {
		$init($StyleConstants);
		if ($nc(style)->getAttribute($StyleConstants::Foreground) != nullptr) {
			style->removeAttribute($StyleConstants::Foreground);
		}
	} else if (!color->equals($($StyleConstants::getForeground(style)))) {
		$StyleConstants::setForeground(style, color);
	}
}

void BasicEditorPaneUI::updateFont($Font* font) {
	$var($StyledDocument, doc, $cast($StyledDocument, $nc($(getComponent()))->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	$init($StyleConstants);
	$var($String, fontFamily, $cast($String, $nc(style)->getAttribute($StyleConstants::FontFamily)));
	$var($Integer, fontSize, $cast($Integer, style->getAttribute($StyleConstants::FontSize)));
	$var($Boolean, isBold, $cast($Boolean, style->getAttribute($StyleConstants::Bold)));
	$var($Boolean, isItalic, $cast($Boolean, style->getAttribute($StyleConstants::Italic)));
	$var($Font, fontAttribute, $cast($Font, style->getAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY)));
	if (font == nullptr) {
		if (fontFamily != nullptr) {
			style->removeAttribute($StyleConstants::FontFamily);
		}
		if (fontSize != nullptr) {
			style->removeAttribute($StyleConstants::FontSize);
		}
		if (isBold != nullptr) {
			style->removeAttribute($StyleConstants::Bold);
		}
		if (isItalic != nullptr) {
			style->removeAttribute($StyleConstants::Italic);
		}
		if (fontAttribute != nullptr) {
			style->removeAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY);
		}
	} else {
		if (!$nc($($nc(font)->getName()))->equals(fontFamily)) {
			$StyleConstants::setFontFamily(style, $(font->getName()));
		}
		bool var$0 = fontSize == nullptr;
		if (!var$0) {
			int32_t var$1 = $nc(fontSize)->intValue();
			var$0 = var$1 != $nc(font)->getSize();
		}
		if (var$0) {
			$StyleConstants::setFontSize(style, font->getSize());
		}
		bool var$2 = isBold == nullptr;
		if (!var$2) {
			bool var$3 = $nc(isBold)->booleanValue();
			var$2 = var$3 != $nc(font)->isBold();
		}
		if (var$2) {
			$StyleConstants::setBold(style, font->isBold());
		}
		bool var$4 = isItalic == nullptr;
		if (!var$4) {
			bool var$5 = $nc(isItalic)->booleanValue();
			var$4 = var$5 != $nc(font)->isItalic();
		}
		if (var$4) {
			$StyleConstants::setItalic(style, font->isItalic());
		}
		if (!$nc(font)->equals(fontAttribute)) {
			style->addAttribute(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY, font);
		}
	}
}

BasicEditorPaneUI::BasicEditorPaneUI() {
}

void clinit$BasicEditorPaneUI($Class* class$) {
	$assignStatic(BasicEditorPaneUI::FONT_ATTRIBUTE_KEY, "FONT_ATTRIBUTE_KEY"_s);
}

$Class* BasicEditorPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicEditorPaneUI, name, initialize, &_BasicEditorPaneUI_ClassInfo_, clinit$BasicEditorPaneUI, allocate$BasicEditorPaneUI);
	return class$;
}

$Class* BasicEditorPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax