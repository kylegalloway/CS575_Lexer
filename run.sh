rm -rf output/*
rm -rf problems/*
echo 'Compiling'
javac Project1.java

while test $# -gt 0; do
        case "$1" in
                --all)
                        echo 'Program0'
                        java Project1 input/input0.cpp >> output/output0.txt
                        echo 'Program01'
                        java Project1 input/input1.cpp >> output/output1.txt
                        echo 'Program02'
                        java Project1 input/input2.cpp >> output/output2.txt
                        echo 'Program03'
                        java Project1 input/input3.cpp >> output/output3.txt
                        echo 'Program04'
                        java Project1 input/input4.cpp >> output/output4.txt
                        echo 'Program05'
                        java Project1 input/input5.cpp >> output/output5.txt
                        echo 'Program06'
                        java Project1 input/input6.cpp >> output/output6.txt
                        echo 'Program07'
                        java Project1 input/input7.cpp >> output/output7.txt
                        echo 'Program08'
                        java Project1 input/input8.cpp >> output/output8.txt
                        echo 'Program09'
                        java Project1 input/input9.cpp >> output/output9.txt
                        echo 'main.cpp'
                        java Project1 input/main.cpp >> output/main.txt
                        echo 'global-variables.cpp'
                        java Project1 input/global-variables.cpp >> output/global-variables.txt
                        echo 'process-init.cpp'
                        java Project1 input/process-init.cpp >> output/process-init.txt
                        echo 'complex'
                        java Project1 input/complex.cpp >> output/complex.txt

                        cat output/output0.txt | grep -n Symbol >> problems/problems0.txt
                        cat output/output1.txt | grep -n Symbol >> problems/problems1.txt
                        cat output/output2.txt | grep -n Symbol >> problems/problems2.txt
                        cat output/output3.txt | grep -n Symbol >> problems/problems3.txt
                        cat output/output4.txt | grep -n Symbol >> problems/problems4.txt
                        cat output/output5.txt | grep -n Symbol >> problems/problems5.txt
                        cat output/output6.txt | grep -n Symbol >> problems/problems6.txt
                        cat output/output7.txt | grep -n Symbol >> problems/problems7.txt
                        cat output/output8.txt | grep -n Symbol >> problems/problems8.txt
                        cat output/output9.txt | grep -n Symbol >> problems/problems9.txt
                        cat output/main.txt | grep -n Symbol >> problems/main.txt
                        cat output/global-variables.txt | grep -n Symbol >> problems/global-variables.txt
                        cat output/process-init.txt | grep -n Symbol >> problems/process-init.txt
                        cat output/complex.txt | grep -n Symbol >> problems/complex.txt
                        shift
                        ;;
                --big)
                        echo 'main.cpp'
                        java Project1 input/main.cpp >> output/main.txt
                        echo 'global-variables.cpp'
                        java Project1 input/global-variables.cpp >> output/global-variables.txt
                        echo 'process-init.cpp'
                        java Project1 input/process-init.cpp >> output/process-init.txt
                        echo 'complex.cpp'
                        java Project1 input/complex.cpp >> output/complex.txt

                        cat output/main.txt | grep -n Symbol >> problems/main.txt
                        cat output/global-variables.txt | grep -n Symbol >> problems/global-variables.txt
                        cat output/process-init.txt | grep -n Symbol >> problems/process-init.txt
                        cat output/complex.txt | grep -n Symbol >> problems/complex.txt
                        shift
                        ;;
                --many)
                        echo 'Program0'
                        java Project1 input/input0.cpp >> output/output0.txt
                        echo 'Program01'
                        java Project1 input/input1.cpp >> output/output1.txt
                        echo 'Program02'
                        java Project1 input/input2.cpp >> output/output2.txt
                        echo 'Program03'
                        java Project1 input/input3.cpp >> output/output3.txt
                        echo 'Program04'
                        java Project1 input/input4.cpp >> output/output4.txt
                        echo 'Program05'
                        java Project1 input/input5.cpp >> output/output5.txt
                        echo 'Program06'
                        java Project1 input/input6.cpp >> output/output6.txt
                        echo 'Program07'
                        java Project1 input/input7.cpp >> output/output7.txt
                        echo 'Program08'
                        java Project1 input/input8.cpp >> output/output8.txt
                        echo 'Program09'
                        java Project1 input/input9.cpp >> output/output9.txt

                        cat output/output0.txt | grep -n Symbol >> problems/problems0.txt
                        cat output/output1.txt | grep -n Symbol >> problems/problems1.txt
                        cat output/output2.txt | grep -n Symbol >> problems/problems2.txt
                        cat output/output3.txt | grep -n Symbol >> problems/problems3.txt
                        cat output/output4.txt | grep -n Symbol >> problems/problems4.txt
                        cat output/output5.txt | grep -n Symbol >> problems/problems5.txt
                        cat output/output6.txt | grep -n Symbol >> problems/problems6.txt
                        cat output/output7.txt | grep -n Symbol >> problems/problems7.txt
                        cat output/output8.txt | grep -n Symbol >> problems/problems8.txt
                        cat output/output9.txt | grep -n Symbol >> problems/problems9.txt
                        shift
                        ;;
                *)
                        echo 'Please select all, many, or big by --all, --many, or --big'
                        break
                        ;;
        esac
done
