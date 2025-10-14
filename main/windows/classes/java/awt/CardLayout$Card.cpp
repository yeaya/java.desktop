#include <java/awt/CardLayout$Card.h>

#include <java/awt/CardLayout.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $CardLayout = ::java::awt::CardLayout;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _CardLayout$Card_FieldInfo_[] = {
	{"this$0", "Ljava/awt/CardLayout;", nullptr, $FINAL | $SYNTHETIC, $field(CardLayout$Card, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CardLayout$Card, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CardLayout$Card, name)},
	{"comp", "Ljava/awt/Component;", nullptr, $PUBLIC, $field(CardLayout$Card, comp)},
	{}
};

$MethodInfo _CardLayout$Card_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/CardLayout;Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(CardLayout$Card::*)($CardLayout*,$String*,$Component*)>(&CardLayout$Card::init$))},
	{}
};

$InnerClassInfo _CardLayout$Card_InnerClassesInfo_[] = {
	{"java.awt.CardLayout$Card", "java.awt.CardLayout", "Card", 0},
	{}
};

$ClassInfo _CardLayout$Card_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.CardLayout$Card",
	"java.lang.Object",
	"java.io.Serializable",
	_CardLayout$Card_FieldInfo_,
	_CardLayout$Card_MethodInfo_,
	nullptr,
	nullptr,
	_CardLayout$Card_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.CardLayout"
};

$Object* allocate$CardLayout$Card($Class* clazz) {
	return $of($alloc(CardLayout$Card));
}

void CardLayout$Card::init$($CardLayout* this$0, $String* cardName, $Component* cardComponent) {
	$set(this, this$0, this$0);
	$set(this, name, cardName);
	$set(this, comp, cardComponent);
}

CardLayout$Card::CardLayout$Card() {
}

$Class* CardLayout$Card::load$($String* name, bool initialize) {
	$loadClass(CardLayout$Card, name, initialize, &_CardLayout$Card_ClassInfo_, allocate$CardLayout$Card);
	return class$;
}

$Class* CardLayout$Card::class$ = nullptr;

	} // awt
} // java