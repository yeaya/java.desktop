#include <bug6925473$1.h>

#include <bug6925473.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

using $bug6925473 = ::bug6925473;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;

$MethodInfo _bug6925473$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6925473$1::*)()>(&bug6925473$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6925473$1_EnclosingMethodInfo_ = {
	"bug6925473",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6925473$1_InnerClassesInfo_[] = {
	{"bug6925473$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6925473$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6925473$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6925473$1_MethodInfo_,
	nullptr,
	&_bug6925473$1_EnclosingMethodInfo_,
	_bug6925473$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6925473"
};

$Object* allocate$bug6925473$1($Class* clazz) {
	return $of($alloc(bug6925473$1));
}

void bug6925473$1::init$() {
}

void bug6925473$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTextArea, textArea, $new($JTextArea, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s));
	$var($Dimension, preferredSize, textArea->getPreferredSize());
	if ($nc(preferredSize)->width <= 0 || $nc(preferredSize)->height <= 0) {
		$throwNew($RuntimeException, $$str({"Invalid preferred size "_s, preferredSize}));
	}
	$var($JTextArea, textAreaLW, $new($JTextArea, "Copyright 2010 Sun Microsystems, Inc.  All Rights Reserved. DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER. This code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License version 2 only, as published by the Free Software Foundation. "_s));
	textAreaLW->setLineWrap(true);
	$var($Dimension, preferredSizeLW, textAreaLW->getPreferredSize());
	if ($nc(preferredSizeLW)->width <= 0 || $nc(preferredSizeLW)->height <= 0) {
		$throwNew($RuntimeException, $$str({"Invalid preferred size "_s, preferredSizeLW}));
	}
}

bug6925473$1::bug6925473$1() {
}

$Class* bug6925473$1::load$($String* name, bool initialize) {
	$loadClass(bug6925473$1, name, initialize, &_bug6925473$1_ClassInfo_, allocate$bug6925473$1);
	return class$;
}

$Class* bug6925473$1::class$ = nullptr;