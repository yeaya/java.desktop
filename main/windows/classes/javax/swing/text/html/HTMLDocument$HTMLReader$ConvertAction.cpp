#include <javax/swing/text/html/HTMLDocument$HTMLReader$ConvertAction.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
#include <javax/swing/text/html/HTMLDocument$HTMLReader.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef B
#undef COLOR
#undef FACE
#undef FONT
#undef FONT_FAMILY
#undef FONT_SIZE
#undef FONT_STYLE
#undef FONT_WEIGHT
#undef I
#undef IMPLIED
#undef SIZE
#undef STRIKE
#undef SUB
#undef SUP
#undef TEXT_DECORATION
#undef U
#undef VERTICAL_ALIGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLDocument$HTMLReader = ::javax::swing::text::html::HTMLDocument$HTMLReader;
using $HTMLDocument$HTMLReader$TagAction = ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HTMLDocument$HTMLReader$ConvertAction_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/HTMLDocument$HTMLReader;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLDocument$HTMLReader$ConvertAction, this$1)},
	{}
};

$MethodInfo _HTMLDocument$HTMLReader$ConvertAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/HTMLDocument$HTMLReader;)V", nullptr, 0, $method(static_cast<void(HTMLDocument$HTMLReader$ConvertAction::*)($HTMLDocument$HTMLReader*)>(&HTMLDocument$HTMLReader$ConvertAction::init$))},
	{"end", "(Ljavax/swing/text/html/HTML$Tag;)V", nullptr, $PUBLIC},
	{"start", "(Ljavax/swing/text/html/HTML$Tag;Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HTMLDocument$HTMLReader$ConvertAction_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$HTMLReader", "javax.swing.text.html.HTMLDocument", "HTMLReader", $PUBLIC},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$ConvertAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "ConvertAction", 0},
	{"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction", "javax.swing.text.html.HTMLDocument$HTMLReader", "TagAction", $PUBLIC},
	{}
};

$ClassInfo _HTMLDocument$HTMLReader$ConvertAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$HTMLReader$ConvertAction",
	"javax.swing.text.html.HTMLDocument$HTMLReader$TagAction",
	nullptr,
	_HTMLDocument$HTMLReader$ConvertAction_FieldInfo_,
	_HTMLDocument$HTMLReader$ConvertAction_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$HTMLReader$ConvertAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$HTMLReader$ConvertAction($Class* clazz) {
	return $of($alloc(HTMLDocument$HTMLReader$ConvertAction));
}

void HTMLDocument$HTMLReader$ConvertAction::init$($HTMLDocument$HTMLReader* this$1) {
	$set(this, this$1, this$1);
	$HTMLDocument$HTMLReader$TagAction::init$(this$1);
}

void HTMLDocument$HTMLReader$ConvertAction::start($HTML$Tag* t, $MutableAttributeSet* attr) {
	this->this$1->pushCharacterStyle();
	if (!this->this$1->foundInsertTag$) {
		bool insert = this->this$1->canInsertTag(t, attr, false);
		if (this->this$1->foundInsertTag$) {
			if (!this->this$1->inParagraph) {
				this->this$1->inParagraph = (this->this$1->impliedP = true);
			}
		}
		if (!insert) {
			return;
		}
	}
	$init($HTMLEditorKit$ParserCallback);
	if ($nc(attr)->isDefined($HTMLEditorKit$ParserCallback::IMPLIED)) {
		attr->removeAttribute($HTMLEditorKit$ParserCallback::IMPLIED);
	}
	if (this->this$1->styleAttributes != nullptr) {
		$nc(this->this$1->charAttr)->addAttributes(this->this$1->styleAttributes);
	}
	$nc(this->this$1->charAttr)->addAttribute(t, $($nc(attr)->copyAttributes()));
	$var($StyleSheet, sheet, $nc(this->this$1->this$0)->getStyleSheet());
	$init($HTML$Tag);
	if (t == $HTML$Tag::B) {
		$init($CSS$Attribute);
		$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::FONT_WEIGHT, "bold"_s);
	} else {
		if (t == $HTML$Tag::I) {
			$init($CSS$Attribute);
			$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::FONT_STYLE, "italic"_s);
		} else {
			if (t == $HTML$Tag::U) {
				$init($CSS$Attribute);
				$var($Object, v, $nc(this->this$1->charAttr)->getAttribute($CSS$Attribute::TEXT_DECORATION));
				$var($String, value, "underline"_s);
				$assign(value, (v != nullptr) ? $str({value, ","_s, $($nc($of(v))->toString())}) : value);
				$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::TEXT_DECORATION, value);
			} else {
				if (t == $HTML$Tag::STRIKE) {
					$init($CSS$Attribute);
					$var($Object, v, $nc(this->this$1->charAttr)->getAttribute($CSS$Attribute::TEXT_DECORATION));
					$var($String, value, "line-through"_s);
					$assign(value, (v != nullptr) ? $str({value, ","_s, $($nc($of(v))->toString())}) : value);
					$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::TEXT_DECORATION, value);
				} else {
					if (t == $HTML$Tag::SUP) {
						$init($CSS$Attribute);
						$var($Object, v, $nc(this->this$1->charAttr)->getAttribute($CSS$Attribute::VERTICAL_ALIGN));
						$var($String, value, "sup"_s);
						$assign(value, (v != nullptr) ? $str({value, ","_s, $($nc($of(v))->toString())}) : value);
						$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::VERTICAL_ALIGN, value);
					} else {
						if (t == $HTML$Tag::SUB) {
							$init($CSS$Attribute);
							$var($Object, v, $nc(this->this$1->charAttr)->getAttribute($CSS$Attribute::VERTICAL_ALIGN));
							$var($String, value, "sub"_s);
							$assign(value, (v != nullptr) ? $str({value, ","_s, $($nc($of(v))->toString())}) : value);
							$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::VERTICAL_ALIGN, value);
						} else {
							if (t == $HTML$Tag::FONT) {
								$init($HTML$Attribute);
								$var($String, color, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::COLOR)));
								if (color != nullptr) {
									$init($CSS$Attribute);
									$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::COLOR, color);
								}
								$var($String, face, $cast($String, attr->getAttribute($HTML$Attribute::FACE)));
								if (face != nullptr) {
									$init($CSS$Attribute);
									$nc(sheet)->addCSSAttribute(this->this$1->charAttr, $CSS$Attribute::FONT_FAMILY, face);
								}
								$var($String, size, $cast($String, attr->getAttribute($HTML$Attribute::SIZE)));
								if (size != nullptr) {
									$init($CSS$Attribute);
									$nc(sheet)->addCSSAttributeFromHTML(this->this$1->charAttr, $CSS$Attribute::FONT_SIZE, size);
								}
							}
						}
					}
				}
			}
		}
	}
}

void HTMLDocument$HTMLReader$ConvertAction::end($HTML$Tag* t) {
	this->this$1->popCharacterStyle();
}

HTMLDocument$HTMLReader$ConvertAction::HTMLDocument$HTMLReader$ConvertAction() {
}

$Class* HTMLDocument$HTMLReader$ConvertAction::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$HTMLReader$ConvertAction, name, initialize, &_HTMLDocument$HTMLReader$ConvertAction_ClassInfo_, allocate$HTMLDocument$HTMLReader$ConvertAction);
	return class$;
}

$Class* HTMLDocument$HTMLReader$ConvertAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax