#include <bug8032874$4.h>

#include <bug8032874.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $bug8032874 = ::bug8032874;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

$MethodInfo _bug8032874$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8032874$4::*)()>(&bug8032874$4::init$))},
	{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+Lbug8032874$TestTableModel;+Ljava/lang/Integer;>;)Z", $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032874$4_EnclosingMethodInfo_ = {
	"bug8032874",
	"createAndShowUI",
	"()V"
};

$InnerClassInfo _bug8032874$4_InnerClassesInfo_[] = {
	{"bug8032874$4", nullptr, nullptr, 0},
	{"bug8032874$TestTableModel", "bug8032874", "TestTableModel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8032874$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032874$4",
	"javax.swing.RowFilter",
	nullptr,
	nullptr,
	_bug8032874$4_MethodInfo_,
	"Ljavax/swing/RowFilter<Lbug8032874$TestTableModel;Ljava/lang/Integer;>;",
	&_bug8032874$4_EnclosingMethodInfo_,
	_bug8032874$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032874"
};

$Object* allocate$bug8032874$4($Class* clazz) {
	return $of($alloc(bug8032874$4));
}

void bug8032874$4::init$() {
	$RowFilter::init$();
}

bool bug8032874$4::include($RowFilter$Entry* entry) {
	return $nc(($cast($Integer, $($nc(entry)->getIdentifier()))))->intValue() % 2 == 0;
}

bug8032874$4::bug8032874$4() {
}

$Class* bug8032874$4::load$($String* name, bool initialize) {
	$loadClass(bug8032874$4, name, initialize, &_bug8032874$4_ClassInfo_, allocate$bug8032874$4);
	return class$;
}

$Class* bug8032874$4::class$ = nullptr;