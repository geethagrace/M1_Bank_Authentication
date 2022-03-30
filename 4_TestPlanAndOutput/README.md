# Test Plans

| **Test ID** | **Description** | **Input** | **Output** | **Status** |
| --- | --- | --- | --- | --- |
| TID\_01 | ENTERING CHOICE | g = 1 | Entry created | PASS ||
| TID\_02 | ENTERING CHOICE | g = 2 | Login Credentials | PASS |
| TID\_03 | ENTERING CHOICE | g = anyvalue(except 1 & 2) | Wrong entry  | PASS |
| TID\_04 | LOGIN CHOICE | Y = 1 | Balance check | PASS |
| TID\_05 | LOGIN CHOICE | Y = 2 | Deposit amount | PASS |
| TID\_06 | LOGIN CHOICE | Y = 3 | Withdraw amount | PASS |
| TID\_07 | LOGIN CHOICE | Y = 4 | Logout | PASS |
| TID\_08 | LOGIN | E = 0 | Login success | PASS |
| TID\_09 | LOGIN | E = 1 | Illegal access | PASS |
