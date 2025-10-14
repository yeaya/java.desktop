#include <javax/swing/ClientPropertyKey.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ClientPropertyKey$1.h>
#include <sun/awt/AWTAccessor$ClientPropertyKeyAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClientPropertyKeyArray = $Array<::javax::swing::ClientPropertyKey>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClientPropertyKey$1 = ::javax::swing::ClientPropertyKey$1;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ClientPropertyKeyAccessor = ::sun::awt::AWTAccessor$ClientPropertyKeyAccessor;

namespace javax {
	namespace swing {

$FieldInfo _ClientPropertyKey_FieldInfo_[] = {
	{"JComponent_INPUT_VERIFIER", "Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientPropertyKey, JComponent_INPUT_VERIFIER)},
	{"JComponent_TRANSFER_HANDLER", "Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientPropertyKey, JComponent_TRANSFER_HANDLER)},
	{"JComponent_ANCESTOR_NOTIFIER", "Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientPropertyKey, JComponent_ANCESTOR_NOTIFIER)},
	{"PopupFactory_FORCE_HEAVYWEIGHT_POPUP", "Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ClientPropertyKey, PopupFactory_FORCE_HEAVYWEIGHT_POPUP)},
	{"$VALUES", "[Ljavax/swing/ClientPropertyKey;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ClientPropertyKey, $VALUES)},
	{"reportValueNotSerializable", "Z", nullptr, $PRIVATE | $FINAL, $field(ClientPropertyKey, reportValueNotSerializable)},
	{}
};

$MethodInfo _ClientPropertyKey_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/ClientPropertyKey;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClientPropertyKeyArray*(*)()>(&ClientPropertyKey::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(ClientPropertyKey::*)($String*,int32_t)>(&ClientPropertyKey::init$))},
	{"<init>", "(Ljava/lang/String;IZ)V", "(Z)V", $PRIVATE, $method(static_cast<void(ClientPropertyKey::*)($String*,int32_t,bool)>(&ClientPropertyKey::init$))},
	{"getReportValueNotSerializable", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ClientPropertyKey::*)()>(&ClientPropertyKey::getReportValueNotSerializable))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClientPropertyKey*(*)($String*)>(&ClientPropertyKey::valueOf))},
	{"values", "()[Ljavax/swing/ClientPropertyKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClientPropertyKeyArray*(*)()>(&ClientPropertyKey::values))},
	{}
};

$InnerClassInfo _ClientPropertyKey_InnerClassesInfo_[] = {
	{"javax.swing.ClientPropertyKey$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClientPropertyKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.ClientPropertyKey",
	"java.lang.Enum",
	nullptr,
	_ClientPropertyKey_FieldInfo_,
	_ClientPropertyKey_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/ClientPropertyKey;>;",
	nullptr,
	_ClientPropertyKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.ClientPropertyKey$1"
};

$Object* allocate$ClientPropertyKey($Class* clazz) {
	return $of($alloc(ClientPropertyKey));
}


ClientPropertyKey* ClientPropertyKey::JComponent_INPUT_VERIFIER = nullptr;

ClientPropertyKey* ClientPropertyKey::JComponent_TRANSFER_HANDLER = nullptr;

ClientPropertyKey* ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER = nullptr;

ClientPropertyKey* ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP = nullptr;
$ClientPropertyKeyArray* ClientPropertyKey::$VALUES = nullptr;

$ClientPropertyKeyArray* ClientPropertyKey::$values() {
	$init(ClientPropertyKey);
	return $new($ClientPropertyKeyArray, {
		ClientPropertyKey::JComponent_INPUT_VERIFIER,
		ClientPropertyKey::JComponent_TRANSFER_HANDLER,
		ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER,
		ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP
	});
}

$ClientPropertyKeyArray* ClientPropertyKey::values() {
	$init(ClientPropertyKey);
	return $cast($ClientPropertyKeyArray, ClientPropertyKey::$VALUES->clone());
}

ClientPropertyKey* ClientPropertyKey::valueOf($String* name) {
	$init(ClientPropertyKey);
	return $cast(ClientPropertyKey, $Enum::valueOf(ClientPropertyKey::class$, name));
}

void ClientPropertyKey::init$($String* $enum$name, int32_t $enum$ordinal) {
	ClientPropertyKey::init$($enum$name, $enum$ordinal, false);
}

void ClientPropertyKey::init$($String* $enum$name, int32_t $enum$ordinal, bool reportValueNotSerializable) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->reportValueNotSerializable = reportValueNotSerializable;
}

bool ClientPropertyKey::getReportValueNotSerializable() {
	return this->reportValueNotSerializable;
}

void clinit$ClientPropertyKey($Class* class$) {
	$assignStatic(ClientPropertyKey::JComponent_INPUT_VERIFIER, $new(ClientPropertyKey, "JComponent_INPUT_VERIFIER"_s, 0, true));
	$assignStatic(ClientPropertyKey::JComponent_TRANSFER_HANDLER, $new(ClientPropertyKey, "JComponent_TRANSFER_HANDLER"_s, 1, true));
	$assignStatic(ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER, $new(ClientPropertyKey, "JComponent_ANCESTOR_NOTIFIER"_s, 2, true));
	$assignStatic(ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP, $new(ClientPropertyKey, "PopupFactory_FORCE_HEAVYWEIGHT_POPUP"_s, 3, true));
	$assignStatic(ClientPropertyKey::$VALUES, ClientPropertyKey::$values());
	{
		$AWTAccessor::setClientPropertyKeyAccessor($$new($ClientPropertyKey$1));
	}
}

ClientPropertyKey::ClientPropertyKey() {
}

$Class* ClientPropertyKey::load$($String* name, bool initialize) {
	$loadClass(ClientPropertyKey, name, initialize, &_ClientPropertyKey_ClassInfo_, clinit$ClientPropertyKey, allocate$ClientPropertyKey);
	return class$;
}

$Class* ClientPropertyKey::class$ = nullptr;

	} // swing
} // javax