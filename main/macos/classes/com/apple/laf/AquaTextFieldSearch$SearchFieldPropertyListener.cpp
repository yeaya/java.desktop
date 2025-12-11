#include <com/apple/laf/AquaTextFieldSearch$SearchFieldPropertyListener.h>

#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaTextFieldSearch$SearchFieldPropertyListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaTextFieldSearch$SearchFieldPropertyListener::*)()>(&AquaTextFieldSearch$SearchFieldPropertyListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTextFieldSearch$SearchFieldPropertyListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener", "com.apple.laf.AquaTextFieldSearch", "SearchFieldPropertyListener", $STATIC},
	{}
};

$ClassInfo _AquaTextFieldSearch$SearchFieldPropertyListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_AquaTextFieldSearch$SearchFieldPropertyListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTextFieldSearch$SearchFieldPropertyListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTextFieldSearch"
};

$Object* allocate$AquaTextFieldSearch$SearchFieldPropertyListener($Class* clazz) {
	return $of($alloc(AquaTextFieldSearch$SearchFieldPropertyListener));
}

void AquaTextFieldSearch$SearchFieldPropertyListener::init$() {
}

void AquaTextFieldSearch$SearchFieldPropertyListener::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(evt)->getSource());
	if (!($instanceOf($JTextComponent, source))) {
		return;
	}
	$var($String, propertyName, evt->getPropertyName());
	bool var$3 = !"JTextField.variant"_s->equals(propertyName);
	bool var$2 = var$3 && !"JTextField.Search.FindPopup"_s->equals(propertyName);
	bool var$1 = var$2 && !"JTextField.Search.FindAction"_s->equals(propertyName);
	bool var$0 = var$1 && !"JTextField.Search.CancelAction"_s->equals(propertyName);
	if (var$0 && !"JTextField.Search.Prompt"_s->equals(propertyName)) {
		return;
	}
	$var($JTextComponent, c, $cast($JTextComponent, source));
	if ($AquaTextFieldSearch::wantsToBeASearchField(c)) {
		$AquaTextFieldSearch::uninstallSearchField(c);
		$AquaTextFieldSearch::installSearchField(c);
	} else {
		$AquaTextFieldSearch::uninstallSearchField(c);
	}
}

AquaTextFieldSearch$SearchFieldPropertyListener::AquaTextFieldSearch$SearchFieldPropertyListener() {
}

$Class* AquaTextFieldSearch$SearchFieldPropertyListener::load$($String* name, bool initialize) {
	$loadClass(AquaTextFieldSearch$SearchFieldPropertyListener, name, initialize, &_AquaTextFieldSearch$SearchFieldPropertyListener_ClassInfo_, allocate$AquaTextFieldSearch$SearchFieldPropertyListener);
	return class$;
}

$Class* AquaTextFieldSearch$SearchFieldPropertyListener::class$ = nullptr;

		} // laf
	} // apple
} // com