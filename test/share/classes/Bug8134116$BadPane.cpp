#include <Bug8134116$BadPane.h>

#include <Bug8134116.h>
#include <java/awt/Component.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _Bug8134116$BadPane_FieldInfo_[] = {
	{"titles", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(Bug8134116$BadPane, titles)},
	{}
};

$MethodInfo _Bug8134116$BadPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Bug8134116$BadPane::*)()>(&Bug8134116$BadPane::init$))},
	{"getTitleAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"insertTab", "(Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Component;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Bug8134116$BadPane_InnerClassesInfo_[] = {
	{"Bug8134116$BadPane", "Bug8134116", "BadPane", $STATIC},
	{}
};

$ClassInfo _Bug8134116$BadPane_ClassInfo_ = {
	$ACC_SUPER,
	"Bug8134116$BadPane",
	"javax.swing.JTabbedPane",
	nullptr,
	_Bug8134116$BadPane_FieldInfo_,
	_Bug8134116$BadPane_MethodInfo_,
	nullptr,
	nullptr,
	_Bug8134116$BadPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Bug8134116"
};

$Object* allocate$Bug8134116$BadPane($Class* clazz) {
	return $of($alloc(Bug8134116$BadPane));
}

void Bug8134116$BadPane::init$() {
	$JTabbedPane::init$();
	$set(this, titles, $new($ArrayList, 1));
}

void Bug8134116$BadPane::insertTab($String* title, $Icon* icon, $Component* component, $String* tip, int32_t index) {
	$nc(this->titles)->add(index, title);
	$JTabbedPane::insertTab(""_s, icon, component, tip, index);
}

$String* Bug8134116$BadPane::getTitleAt(int32_t i) {
	return $cast($String, $nc(this->titles)->get(i));
}

Bug8134116$BadPane::Bug8134116$BadPane() {
}

$Class* Bug8134116$BadPane::load$($String* name, bool initialize) {
	$loadClass(Bug8134116$BadPane, name, initialize, &_Bug8134116$BadPane_ClassInfo_, allocate$Bug8134116$BadPane);
	return class$;
}

$Class* Bug8134116$BadPane::class$ = nullptr;