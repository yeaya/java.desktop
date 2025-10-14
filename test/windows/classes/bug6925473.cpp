#include <bug6925473.h>

#include <bug6925473$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef LONG_TEXT

using $bug6925473$1 = ::bug6925473$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6925473_FieldInfo_[] = {
	{"LONG_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6925473, LONG_TEXT)},
	{}
};

$MethodInfo _bug6925473_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6925473::*)()>(&bug6925473::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6925473::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6925473_InnerClassesInfo_[] = {
	{"bug6925473$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6925473_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6925473",
	"java.lang.Object",
	nullptr,
	_bug6925473_FieldInfo_,
	_bug6925473_MethodInfo_,
	nullptr,
	nullptr,
	_bug6925473_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6925473$1"
};

$Object* allocate$bug6925473($Class* clazz) {
	return $of($alloc(bug6925473));
}

$String* bug6925473::LONG_TEXT = nullptr;

void bug6925473::init$() {
}

void bug6925473::main($StringArray* args) {
	$init(bug6925473);
	$SwingUtilities::invokeAndWait($$new($bug6925473$1));
}

bug6925473::bug6925473() {
}

void clinit$bug6925473($Class* class$) {
	$assignStatic(bug6925473::LONG_TEXT, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s);
}

$Class* bug6925473::load$($String* name, bool initialize) {
	$loadClass(bug6925473, name, initialize, &_bug6925473_ClassInfo_, clinit$bug6925473, allocate$bug6925473);
	return class$;
}

$Class* bug6925473::class$ = nullptr;