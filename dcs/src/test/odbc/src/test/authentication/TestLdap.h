#pragma once
#include "../../common/Global.h"
#include "../../common/TestBase.h"

class CTestLdap :
	public CTestBase
{
public:
	CTestLdap(const char * chDsn, const char * chUID, const char * chPwd);
	~CTestLdap();

private:
	CTestLdap();

private:
	bool Prepare();
	bool TestGo();
	void CleanUp();
	
};

