#include <com/apple/laf/AquaKeyBindings$LateBoundInputMap.h>

#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $AquaKeyBindings$BindingsProviderArray = $Array<::com::apple::laf::AquaKeyBindings$BindingsProvider>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $AquaKeyBindings$BindingsProvider = ::com::apple::laf::AquaKeyBindings$BindingsProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaKeyBindings$LateBoundInputMap_FieldInfo_[] = {
	{"providerList", "[Lcom/apple/laf/AquaKeyBindings$BindingsProvider;", nullptr, $PRIVATE | $FINAL, $field(AquaKeyBindings$LateBoundInputMap, providerList)},
	{"mergedBindings", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(AquaKeyBindings$LateBoundInputMap, mergedBindings)},
	{}
};

$MethodInfo _AquaKeyBindings$LateBoundInputMap_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([Lcom/apple/laf/AquaKeyBindings$BindingsProvider;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(AquaKeyBindings$LateBoundInputMap::*)($AquaKeyBindings$BindingsProviderArray*)>(&AquaKeyBindings$LateBoundInputMap::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBindings", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"mergeBindings", "(Ljava/util/ArrayList;[Ljava/lang/String;)V", "(Ljava/util/ArrayList<Ljava/lang/String;>;[Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($ArrayList*,$StringArray*)>(&AquaKeyBindings$LateBoundInputMap::mergeBindings))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaKeyBindings$LateBoundInputMap_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$LateBoundInputMap", "com.apple.laf.AquaKeyBindings", "LateBoundInputMap", $STATIC},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaKeyBindings$LateBoundInputMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaKeyBindings$LateBoundInputMap",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue,com.apple.laf.AquaKeyBindings$BindingsProvider",
	_AquaKeyBindings$LateBoundInputMap_FieldInfo_,
	_AquaKeyBindings$LateBoundInputMap_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings$LateBoundInputMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings"
};

$Object* allocate$AquaKeyBindings$LateBoundInputMap($Class* clazz) {
	return $of($alloc(AquaKeyBindings$LateBoundInputMap));
}

int32_t AquaKeyBindings$LateBoundInputMap::hashCode() {
	 return this->$UIDefaults$LazyValue::hashCode();
}

bool AquaKeyBindings$LateBoundInputMap::equals(Object$* arg0) {
	 return this->$UIDefaults$LazyValue::equals(arg0);
}

$Object* AquaKeyBindings$LateBoundInputMap::clone() {
	 return this->$UIDefaults$LazyValue::clone();
}

$String* AquaKeyBindings$LateBoundInputMap::toString() {
	 return this->$UIDefaults$LazyValue::toString();
}

void AquaKeyBindings$LateBoundInputMap::finalize() {
	this->$UIDefaults$LazyValue::finalize();
}

void AquaKeyBindings$LateBoundInputMap::init$($AquaKeyBindings$BindingsProviderArray* providerList) {
	$set(this, providerList, providerList);
}

$Object* AquaKeyBindings$LateBoundInputMap::createValue($UIDefaults* table) {
	return $of($LookAndFeel::makeInputMap($(getBindings())));
}

$StringArray* AquaKeyBindings$LateBoundInputMap::getBindings() {
	$useLocalCurrentObjectStackCache();
	if (this->mergedBindings != nullptr) {
		return this->mergedBindings;
	}
	$var($StringArray2, bindingsList, $new($StringArray2, $nc(this->providerList)->length));
	int32_t size = 0;
	for (int32_t i = 0; i < $nc(this->providerList)->length; ++i) {
		bindingsList->set(i, $($nc($nc(this->providerList)->get(i))->getBindings()));
		size += $nc(bindingsList->get(i))->length;
	}
	if (bindingsList->length == 1) {
		return $set(this, mergedBindings, bindingsList->get(0));
	}
	$var($ArrayList, unifiedList, $new($ArrayList, size));
	$Collections::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(unifiedList))), bindingsList->get(0));
	for (int32_t i = 1; i < $nc(this->providerList)->length; ++i) {
		mergeBindings(unifiedList, bindingsList->get(i));
	}
	return $set(this, mergedBindings, $fcast($StringArray, unifiedList->toArray($$new($StringArray, unifiedList->size()))));
}

void AquaKeyBindings$LateBoundInputMap::mergeBindings($ArrayList* unifiedList, $StringArray* overrides) {
	$init(AquaKeyBindings$LateBoundInputMap);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(overrides)->length; i += 2) {
		$var($String, key, overrides->get(i));
		$var($String, value, overrides->get(i + 1));
		int32_t keyIndex = $nc(unifiedList)->indexOf(key);
		if (keyIndex == -1) {
			unifiedList->add(key);
			unifiedList->add(value);
		} else {
			unifiedList->set(keyIndex, key);
			unifiedList->set(keyIndex + 1, value);
		}
	}
}

AquaKeyBindings$LateBoundInputMap::AquaKeyBindings$LateBoundInputMap() {
}

$Class* AquaKeyBindings$LateBoundInputMap::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings$LateBoundInputMap, name, initialize, &_AquaKeyBindings$LateBoundInputMap_ClassInfo_, allocate$AquaKeyBindings$LateBoundInputMap);
	return class$;
}

$Class* AquaKeyBindings$LateBoundInputMap::class$ = nullptr;

		} // laf
	} // apple
} // com