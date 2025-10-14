#include <bug8031971$TestTable.h>

#include <bug8031971.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $bug8031971 = ::bug8031971;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $JTable = ::javax::swing::JTable;

$MethodInfo _bug8031971$TestTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8031971$TestTable::*)()>(&bug8031971$TestTable::init$))},
	{"getDefaultEditorsByColumnClass", "()Ljava/util/Hashtable;", nullptr, 0},
	{"getDefaultRenderersByColumnClass", "()Ljava/util/Hashtable;", nullptr, 0},
	{}
};

$InnerClassInfo _bug8031971$TestTable_InnerClassesInfo_[] = {
	{"bug8031971$TestTable", "bug8031971", "TestTable", $STATIC},
	{}
};

$ClassInfo _bug8031971$TestTable_ClassInfo_ = {
	$ACC_SUPER,
	"bug8031971$TestTable",
	"javax.swing.JTable",
	nullptr,
	nullptr,
	_bug8031971$TestTable_MethodInfo_,
	nullptr,
	nullptr,
	_bug8031971$TestTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8031971"
};

$Object* allocate$bug8031971$TestTable($Class* clazz) {
	return $of($alloc(bug8031971$TestTable));
}

void bug8031971$TestTable::init$() {
	$JTable::init$();
}

$Hashtable* bug8031971$TestTable::getDefaultRenderersByColumnClass() {
	return this->defaultRenderersByColumnClass;
}

$Hashtable* bug8031971$TestTable::getDefaultEditorsByColumnClass() {
	return this->defaultEditorsByColumnClass;
}

bug8031971$TestTable::bug8031971$TestTable() {
}

$Class* bug8031971$TestTable::load$($String* name, bool initialize) {
	$loadClass(bug8031971$TestTable, name, initialize, &_bug8031971$TestTable_ClassInfo_, allocate$bug8031971$TestTable);
	return class$;
}

$Class* bug8031971$TestTable::class$ = nullptr;