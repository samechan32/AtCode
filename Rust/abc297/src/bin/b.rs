use proconio::input;

fn main() {
    input! {
        s: String,
    }

    let mut b = 0;
    let mut r1 = 0;
    let mut r2 = 0;
    let mut k = 0;
    for (i, c) in (1..).zip(s.chars()) {
        if c == 'B' {
            b += i;
        }

        if c == 'R' {
            if r1 == 0 {
                r1 = i;
            } else {
                r2 = i;
            }
        }

        if c == 'K' {
            k = i;
        }
    }

    let mut ans = "No";
    if (b % 2 != 0) & (r1 < k) & (k < r2) {
        ans = "Yes";
    }

    println!("{}", ans);
}
