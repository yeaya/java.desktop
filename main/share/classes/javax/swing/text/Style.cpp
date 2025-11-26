#include <javax/swing/text/Style.h>

#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Style_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Style_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Style",
	nullptr,
	"javax.swing.text.MutableAttributeSet",
	nullptr,
	_Style_MethodInfo_
};

$Object* allocate$Style($Class* clazz) {
	return $of($alloc(Style));
}

$Class* Style::load$($String* name, bool initialize) {
	$loadClass(Style, name, initialize, &_Style_ClassInfo_, allocate$Style);
	return class$;
}

$Class* Style::class$ = nullptr;

		} // text
	} // swing
} // javax