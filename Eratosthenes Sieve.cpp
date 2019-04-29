For(i,2,100000)
        if (!ok[i])
        {
            ll j = i;
            while (i*j <= 100000)
            {
                if (!ok[i*j])
                {
                    ok[i*j] = true;
                }
                j++;
            }
            prime.pb(i);
        }
f[0] = 1;
f[1] = 1;
For(i,2,100)
    f[i] = (f[i-1] * i) % modulo;
rf[0] = 1;
For(i,1,100)
    rf[i] = (rf[i-1] * pow(i,modulo-2))%modulo;