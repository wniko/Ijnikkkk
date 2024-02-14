package com.example.ijnikkkk;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.ijnikkkk.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("ijnikkkk");
    }

    private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());
        TextView tv = binding.sampleText;
         String res = String.valueOf(encryptUtils.add(1, 2));
        tv.setText(res);
    }

    /**
     * A native method that is implemented by the 'ijnikkkk' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}