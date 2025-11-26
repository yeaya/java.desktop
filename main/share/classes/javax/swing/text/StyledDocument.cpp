#include <javax/swing/text/StyledDocument.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Style.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Style = ::javax::swing::text::Style;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _StyledDocument_MethodInfo_[] = {
	{"addStyle", "(Ljava/lang/String;Ljavax/swing/text/Style;)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getForeground", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLogicalStyle", "(I)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParagraphElement", "(I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStyle", "(Ljava/lang/String;)Ljavax/swing/text/Style;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeStyle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCharacterAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLogicalStyle", "(ILjavax/swing/text/Style;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setParagraphAttributes", "(IILjavax/swing/text/AttributeSet;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StyledDocument_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.StyledDocument",
	nullptr,
	"javax.swing.text.Document",
	nullptr,
	_StyledDocument_MethodInfo_
};

$Object* allocate$StyledDocument($Class* clazz) {
	return $of($alloc(StyledDocument));
}

$Class* StyledDocument::load$($String* name, bool initialize) {
	$loadClass(StyledDocument, name, initialize, &_StyledDocument_ClassInfo_, allocate$StyledDocument);
	return class$;
}

$Class* StyledDocument::class$ = nullptr;

		} // text
	} // swing
} // javax